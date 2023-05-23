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

// Fuction Prototypes
void setMode();
void readFile(wstring textFile, int& count, vector<shared_ptr<IShape>>& shapes, ParserFactory& parser_factory);
void sortWithLambdaExpression(vector<shared_ptr<IShape>>& shapes);
void loadShapesToPrinter(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, ConverterFactory& converter_factory);
void setCustomPrinter(ShapesPrinter& printer, IShowDataBehavior*& showDataBehavior, IShowTableBehavior*& showTableBehavior);
void printToScreen(ShapesPrinter& printer, vector<shared_ptr<IShape>>& shapes, int count);

int main() {
	// Initial
	ShapesPrinter printer;
	ParserFactory parser_factory;
	ConverterFactory converter_factory;
	vector<shared_ptr<IShape>> shapes;
	wstring textFile = L"shapes.txt";
	int count = 0;

	// Custom printer
	IShowDataBehavior* showDataBehavior = new ShowDataCustom;
	IShowTableBehavior* showTableBehavior = new ShowTableCustom;
	
	// DLL Initial
	typedef IShapeToStringConverter* (__cdecl* FN_SHAPE_CONVERTER)();
	typedef IParser* (__cdecl* FN_SHAPE_PARSER)();

	FN_SHAPE_PARSER fn_parser = nullptr;
	FN_SHAPE_CONVERTER fn_converter = nullptr;
	vector<std::filesystem::path> dll_files; // mảng này lưu đường dẫn các file dll

	const std::filesystem::path path_obj = std::filesystem::current_path();
	const std::filesystem::path path_obj1("../x64/Debug");

	vector<shared_ptr<void>> hLibs;

	/* lưu lại các con trỏ handle*/
	vector<shared_ptr<IParser>> parser_ptrs;
	vector<shared_ptr<IShapeToStringConverter>> converter_ptrs;

	// Load dll
	//  Load cac file DLL va luu vao mang
	for (const auto& entry : std::filesystem::directory_iterator(path_obj1)) {
		if (entry.path().extension() == ".dll") {
			dll_files.push_back(entry.path());
		}
	}

	for (auto& dll_path : dll_files) {

		// Mở file dll
		HMODULE hDll = LoadLibrary(dll_path.c_str());

		if (hDll != NULL) {

			// Nếu mở file thành công thì thêm vào hLibs
			// Đối số FreeLibrary biểu trưng cho việc nếu dll này không dùng
			// thì tự động gọi đến hàm FreeLibrary để hủy cấp phát
			hLibs.emplace_back(hDll, &FreeLibrary);

			// Load lên hai hàm getParserInstance và getConverterInstance
			// Mục đích: nếu có hài hàm này thì file hợp lệ
			// Ứng vớ mỗi hàm này thì thực hiện khai báo cho các Factory 
			fn_parser = (FN_SHAPE_PARSER)GetProcAddress(hDll, "getParserInstance");
			fn_converter = (FN_SHAPE_CONVERTER)GetProcAddress(hDll, "getConverterInstance");

			/* Kiểm tra điều kiện để khai báo*/
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

	readFile(textFile, count, shapes, parser_factory);

	sortWithLambdaExpression(shapes);

	loadShapesToPrinter(printer, shapes, converter_factory);

	setCustomPrinter(printer, showDataBehavior, showTableBehavior);

	printToScreen(printer, shapes, count);

	// End
	system("pause");
	parser_ptrs.clear();
	converter_ptrs.clear();
	shapes.clear();
	hLibs.clear();

	return 0;
}

void setMode() {
	auto mode = _setmode(_fileno(stdout), _O_U16TEXT);	// in tiếng việt

}

void readFile(wstring textFile, int& count, vector<shared_ptr<IShape>>& shapes, ParserFactory& parser_factory) {
	fstream ifs(textFile.c_str());
	regex space("\\s+");
	string line;

	if (ifs) {
		wcout << L"Đang đọc tệp tin " << textFile << L"..." << endl;
		getline(ifs, line);
		line = regex_replace(line, space, ""); // dòng này để xóa hết khoảng trắng
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
					// ko can in cai gi het
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