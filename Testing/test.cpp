#include "pch.h"

	ParserFactory* _parser_factory = new ParserFactory;
	ConverterFactory* _converter_factory = new ConverterFactory;
	vector<shared_ptr<IShape>> _shapes;

	// Load dll
	// DLL Initial
	typedef IShapeToStringConverter* (__cdecl* FN_SHAPE_CONVERTER)();
	typedef IParser* (__cdecl* FN_SHAPE_PARSER)();

	FN_SHAPE_PARSER fn_parser = nullptr;
	FN_SHAPE_CONVERTER fn_converter = nullptr;
	vector<std::filesystem::path> dll_files; // mảng này lưu đường dẫn các file dll

	const std::filesystem::path path_obj = std::filesystem::current_path();
	const std::filesystem::path path_obj1("../x64/Debug");

	vector<shared_ptr<void>> hLibs;

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

			// Kiểm tra điều kiện để khai báo
			if (fn_parser != NULL) {
				IParser* instance = fn_parser();
				string shapeName = dll_path.filename().stem().string();
				_parser_factory->registerWith(shapeName, instance);
			}

			if (fn_converter != NULL) {
				IShapeToStringConverter* instance = fn_converter();
				string shapeName = dll_path.filename().stem().string();
				_converter_factory->registerWith(shapeName, instance);
			}
		}

	}


TEST(ShapesParserTest123, ShapesParserStartsEmptyParser) {	
	ShapesParserTest shape;

	regex space("\\s+");
	string line = "Triangle: a = 4, b = 5, c = 6";

	line = regex_replace(line, space, "");
	stringstream buffer(line);
	string type;
	string data;

	getline(buffer, type, ':');
	getline(buffer, data);

	//IParser* parser = _parser_factory->select(type);
	EXPECT_EQ(1, 2);
}



int main(int argc, char* argv[]) {
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}