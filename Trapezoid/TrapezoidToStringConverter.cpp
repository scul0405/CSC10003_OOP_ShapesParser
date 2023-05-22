#include "pch.h"
#include "TrapezoidToStringConverter.h"

SHAPE_DATA TrapezoidToStringConverter::convert(IShape* shape)
{
	myTrapezoid::Trapezoid* Trapezoid = dynamic_cast<myTrapezoid::Trapezoid*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình thang";

	*builder << L"Đáy bé=" << Trapezoid->top()
		<< L", Đáy lớn=" << Trapezoid->base()
		<< L", Đường cao=" << Trapezoid->height();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << Trapezoid->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << Trapezoid->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}