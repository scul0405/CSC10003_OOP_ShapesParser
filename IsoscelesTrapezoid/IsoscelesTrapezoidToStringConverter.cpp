#include "pch.h"
#include "IsoscelesTrapezoidToStringConverter.h"

SHAPE_DATA IsoscelesTrapezoidToStringConverter::convert(IShape* shape)
{
	myIsoscelesTrapezoid::IsoscelesTrapezoid* IsoscelesTrapezoid = dynamic_cast<myIsoscelesTrapezoid::IsoscelesTrapezoid*>(shape);
	if (IsoscelesTrapezoid != nullptr) {
		wstringstream* builder = new wstringstream;

		wstring shapeName = L"Hình thang cân";

		*builder << L"Đáy bé=" << IsoscelesTrapezoid->top()
			<< L", Đáy lớn=" << IsoscelesTrapezoid->base()
			<< L", Đường cao=" << IsoscelesTrapezoid->height();
		wstring attributes(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Diện tích="
			<< fixed << setprecision(2) << IsoscelesTrapezoid->area();
		wstring area(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Chu vi="
			<< fixed << setprecision(1) << IsoscelesTrapezoid->perimeter();
		wstring perimeter(builder->str());

		SHAPE_DATA result = { shapeName, attributes, perimeter, area };
		return result;
	}
}

string IsoscelesTrapezoidToStringConverter::toString()
{
	return "IsoscelesTrapezoidToStringConverter";
}
