#include "pch.h"
#include "SquareToStringConverter.h"

SHAPE_DATA SquareToStringConverter::convert(IShape* shape)
{
	// cast IShape về Square để truy cập các phương thức riêng
	mySquare::Square* square = dynamic_cast<mySquare::Square*>(shape);
	if (square != nullptr) { 
		wstringstream* builder = new wstringstream;

		// Lưu tên
		wstring shapeName = L"Hình vuông";

		// Thông tin
		*builder << L"Cạnh=" << square->length();
		wstring attributes(builder->str());

		//reset builder sau đó lưu tiếp
		delete builder;
		builder = new wstringstream;

		*builder << L"Diện tích="
			<< fixed << setprecision(2) << square->area();
		wstring area(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Chu vi="
			<< fixed << setprecision(1) << square->perimeter();
		wstring perimeter(builder->str());

		// Trả về tuple bao gồm tên, thông tin, chu vi, diện tích
		SHAPE_DATA result = { shapeName, attributes, perimeter, area };
		return result;
	}
}

string SquareToStringConverter::toString()
{
	return "SquareToStringConverter";
}
