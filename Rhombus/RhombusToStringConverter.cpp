#include "pch.h"
#include "RhombusToStringConverter.h"

SHAPE_DATA RhombusToStringConverter::convert(IShape* shape)
{
	myRhombus::Rhombus* rhombus = dynamic_cast<myRhombus::Rhombus*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình thoi";

	*builder << L"Đường chéo phụ=" << rhombus->short_diagonal()
		<< L", Đường chéo chính=" << rhombus->long_diagonal();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << rhombus->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << rhombus->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}

string RhombusToStringConverter::toString()
{
	return "RhombusToStringConverter";
}
