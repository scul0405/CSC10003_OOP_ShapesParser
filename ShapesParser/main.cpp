#include "IShape.h"
#include "IParser.h"
#include "IShapeToStringConverter.h"
#include "IShowTableBehavior.h"
#include "IShowDataBehavior.h"
#include "ParserFactory.h"
#include "ConverterFactory.h"
#include "ShapesPrinter.h"
#include "ShowTableCustom.h"
#include "ShowDataCustom.h"

/**
 * @mainpage ĐỒ ÁN CUỐI KÌ MÔN LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG
 *
 * 21120353: Vi Lý Duy Trường \n
 * 21120432: Vũ Tiến Đạt
 */


 /// <summary>
 /// Function to set Vietnamese character mode for console output
 /// </summary>
void setMode();

/// <summary>
/// Function to read text file and store shape objects in a vector
/// </summary>
/// <param name="textFile">Name of the text file</param>
/// <param name="count">Number of shape objects declared in the file</param>
/// <param name="shapes">Vector to store shape objects</param>
/// <param name="parser_factory">Parser factory to select object instantiation method through parsing</param>
void readFile(wstring textFile, int& count, vector<shared_ptr<IShape>>& shapes, ParserFactory& parser_factory);

/// <summary>
/// Function to sort shape objects in ascending order of area
/// </summary>
/// <param name="shapes">Vector of shape objects to be sorted</param>
void sortWithLambdaExpression(vector<shared_ptr<IShape>>& shapes);

/// <summary>
/// Function to load IShape objects into a ShapesPrinter for printing
/// </summary>
/// <param name="printer">ShapesPrinter object that handles printing</param>
/// <param name="shapes">Vector of shape objects to be printed</param>
/// <param name="converter_factory">ConverterFactory to select object instantiation method through conversion</param>
void loadShapesToPrinter(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, ConverterFactory& converter_factory);

/// <summary>
/// Function to set custom printing behavior for the ShapesPrinter object
/// </summary>
/// <param name="printer">ShapesPrinter object that handles printing</param>
/// <param name="showDataBehavior">Behavior for printing data</param>
/// <param name="showTableBehavior">Behavior for printing table</param>
void setCustomPrinter(ShapesPrinter& printer, IShowDataBehavior*& showDataBehavior, IShowTableBehavior*& showTableBehavior);

/// <summary>
/// Function to print shape objects to the console
/// </summary>
/// <param name="printer">ShapesPrinter object that handles printing</param>
/// <param name="shapes">Vector of shape objects to be printed</param>
/// <param name="count">Number of shape objects declared in the file</param>
void printToScreen(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, int count);

int main() {
	// Initialize ShapesPrinter object for printing
	ShapesPrinter printer;

	// Initialize ParserFactory object for selecting instantiation method through parsing
	ParserFactory parser_factory;

	// Initialize ConverterFactory object for selecting instantiation method through conversion
	ConverterFactory converter_factory;

	// Vector to store shape objects read from file
	vector<shared_ptr<IShape>> shapes;

	// Name of text file to be read
	wstring textFile = L"shapes.txt";

	// Number of shape objects declared in the file
	int count = 0;

	// Custom behaviors for printing data and table
	IShowDataBehavior* showDataBehavior = new ShowDataCustom;
	IShowTableBehavior* showTableBehavior = new ShowTableCustom;
	
	// Redefine function pointers
	typedef IShapeToStringConverter* (__cdecl* FN_SHAPE_CONVERTER)();
	typedef IParser* (__cdecl* FN_SHAPE_PARSER)();

	FN_SHAPE_PARSER fn_parser = nullptr;
	FN_SHAPE_CONVERTER fn_converter = nullptr;

	// Vector to store path of DLL files
	vector<std::filesystem::path> dll_files;

	// Path to .exe file after building
	const std::filesystem::path path_obj = std::filesystem::current_path();

	// TODO: MODIFY THIS PATH BEFORE SUBMISSION AND CHANGE TO FOR LOOP BELOW
	const std::filesystem::path path_obj1("../x64/Release");

	// Vector to store successfully opened DLL files
	vector<shared_ptr<void>> hLibs;

	// Vectors to store handle pointers
	vector<shared_ptr<IParser>> parser_ptrs;
	vector<shared_ptr<IShapeToStringConverter>> converter_ptrs;

	// Load DLL files and add them to the array
	for (const auto& entry : std::filesystem::directory_iterator(path_obj1)) {
		if (entry.path().extension() == ".dll") {
			dll_files.push_back(entry.path());
		}
	}

	for (auto& dll_path : dll_files) {

		// OPEN .DLL FILE 
		HMODULE hDll = LoadLibrary(dll_path.c_str());

		if (hDll != NULL) {

			hLibs.emplace_back(hDll, &FreeLibrary);

			// Get function pointers for parser and converter instantiation 
			fn_parser = (FN_SHAPE_PARSER)GetProcAddress(hDll, "getParserInstance");
			fn_converter = (FN_SHAPE_CONVERTER)GetProcAddress(hDll, "getConverterInstance");

			// Create new instances of parser and converter using function pointers
			if (fn_parser != NULL) {
				auto instance = fn_parser();
				string shapeName = dll_path.filename().stem().string();
				shared_ptr<IParser> parser_ptr(instance);
				parser_ptrs.push_back(parser_ptr);
				parser_factory.registerWith(shapeName, parser_ptr.get());
			}

			if (fn_converter != NULL) {
				auto instance = fn_converter();
				string shapeName = dll_path.filename().stem().string();
				shared_ptr<IShapeToStringConverter> converter_ptr(instance);
				converter_ptrs.push_back(converter_ptr);
				converter_factory.registerWith(shapeName, converter_ptr.get());
			}
		}

	}

	// Run program
	setMode();

	// Read shape objects from file
	readFile(textFile, count, shapes, parser_factory);

	// Sort shape objects by area in ascending order
	sortWithLambdaExpression(shapes);

	// Load shape objects into ShapesPrinter object for printing
	loadShapesToPrinter(printer, shapes, converter_factory);

	// Set custom behaviors for ShapesPrinter object
	setCustomPrinter(printer, showDataBehavior, showTableBehavior);
	
	// Print shape objects to the console
	printToScreen(printer, shapes, count);

	// Clear up
	system("pause");
	parser_ptrs.clear();
	converter_ptrs.clear();
	shapes.clear();
	hLibs.clear();

	return 0;
}

void setMode() {
	auto mode = _setmode(_fileno(stdout), _O_U16TEXT);

}

void readFile(wstring textFile, int& count, vector<shared_ptr<IShape>>& shapes, ParserFactory& parser_factory) {
	fstream ifs(textFile.c_str());
	regex space("\\s+");
	string line;

	if (ifs) {
		wcout << L"Đang đọc tệp tin " << textFile << L"..." << endl;
		getline(ifs, line);
		line = regex_replace(line, space, "");
		count = stoi(line);

		for (int i = 0; i < count; i++) {
			getline(ifs, line);
			line = regex_replace(line, space, "");
			stringstream buffer(line);
			string type;
			string data;

			getline(buffer, type, ':');
			getline(buffer, data);

			IParser* parser = parser_factory.select(type);
			if (parser != nullptr) {
				try {
					shared_ptr<IShape> tmp(parser->parse(stringstream(data)));
					if (tmp != nullptr) {
						shapes.push_back(tmp);
					}
					else {
						// do nothing
					}
				}
				catch (...) {
					// eat exception
					continue;
				}
			}
		}
	}
	else {
		wcout << L"Không thể mở tệp tin " << textFile << endl;
	}
	ifs.close();
}

void sortWithLambdaExpression(vector<shared_ptr<IShape>>& shapes) {
	sort(shapes.begin(), shapes.end(),
		[](const shared_ptr<IShape>& a, const shared_ptr<IShape>& b) {
			return (a->area() < b->area());
		}
	);
}

void loadShapesToPrinter(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, ConverterFactory& converter_factory){
	for (int i = 0; i < shapes.size(); i++) {
		string type = shapes[i]->toString();
		IShapeToStringConverter* converter = converter_factory.select(type);
		printer.push(converter->convert(shapes[i].get()));
	}
}

void setCustomPrinter(ShapesPrinter& printer, IShowDataBehavior*& showDataBehavior, IShowTableBehavior*& showTableBehavior) {
	printer.setShowDataBehavior(showDataBehavior);
	printer.setShowTableBehavior(showTableBehavior);
}

void printToScreen(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, int count) {
	wcout << L"Tìm thấy " << to_wstring(shapes.size()) << " hình" << L" / " <<
		to_wstring(count) << L" hình." << endl;

	printer.performShowDataBehavior(printer.getData());

	if (shapes.size() != count) {
		wcout << L"Không thể đọc được: " << (count - shapes.size())
			<< " hình." << endl;
	}

	printer.performShowTableBehavior(printer.getData());
}