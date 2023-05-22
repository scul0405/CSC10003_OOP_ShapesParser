#include "pch.h"
#include "TriangleToStringConverter.h"

SHAPE_DATA TriangleToStringConverter::convert(IShape* shape)
{
	myTriangle::Triangle* triangle = dynamic_cast<myTriangle::Triangle*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình tam giác";

	*builder << L"Cạnh 1=" << triangle->firstEgde()
		<< L", Cạnh 2=" << triangle->secondEgde()
		<< L", Cạnh 3=" << triangle->thirdEgde();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << triangle->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << triangle->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}