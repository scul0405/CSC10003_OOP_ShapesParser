#include "pch.h"
#include "EllipseToStringConverter.h"

SHAPE_DATA EllipseToStringConverter::convert(IShape* shape)
{
	myEllipse::Ellipse* ellipse = dynamic_cast<myEllipse::Ellipse*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình e-líp";

	*builder << L"Bán trục bé=" << ellipse->semi_minor_axis()
		<< L", Bán trục lớn=" << ellipse->semi_major_axis();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << ellipse->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << ellipse->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}