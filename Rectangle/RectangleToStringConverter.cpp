#include "pch.h"
#include "RectangleToStringConverter.h"

SHAPE_DATA RectangleToStringConverter::convert(IShape* shape)
{
	myRectangle::Rectangle* rectangle = dynamic_cast<myRectangle::Rectangle*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình chữ nhật";

	*builder << L"Rộng=" << rectangle->width()
		<< L", Cao=" << rectangle->height();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << rectangle->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << rectangle->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}