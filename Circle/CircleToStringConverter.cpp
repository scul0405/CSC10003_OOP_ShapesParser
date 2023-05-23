#include "pch.h"
#include "CircleToStringConverter.h"

SHAPE_DATA CircleToStringConverter::convert(IShape* shape)
{
	Circle* circle = dynamic_cast<Circle*>(shape);
	if (circle != nullptr) {
		wstringstream* builder = new wstringstream;

		wstring shapeName = L"Hình tròn";

		*builder << L"Bán kính=" << circle->radius();
		wstring attributes(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Diện tích="
			<< fixed << setprecision(2) << circle->area();
		wstring area(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Chu vi="
			<< fixed << setprecision(1) << circle->perimeter();
		wstring perimeter(builder->str());

		SHAPE_DATA result = { shapeName, attributes, perimeter, area };
		return result;
	}
}

string CircleToStringConverter::toString()
{
	return "CircleToStringConverter";
}
