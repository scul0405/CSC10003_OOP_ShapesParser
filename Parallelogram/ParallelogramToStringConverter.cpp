#include "pch.h"
#include "ParallelogramToStringConverter.h"

SHAPE_DATA ParallelogramToStringConverter::convert(IShape* shape)
{
	myParallelogram::Parallelogram* parallelogram = dynamic_cast<myParallelogram::Parallelogram*>(shape);
	if (parallelogram != nullptr) {
		wstringstream* builder = new wstringstream;

		wstring shapeName = L"Hình bình hành";

		*builder << L"Cạnh bên=" << parallelogram->side()
			<< L", Cạnh đáy=" << parallelogram->base()
			<< L", Đường cao =" << parallelogram->height();
		wstring attributes(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Diện tích=" 
			<< fixed << setprecision(2) << parallelogram->area();
		wstring area(builder->str());

		//reset 
		delete builder;
		builder = new wstringstream;

		*builder << L"Chu vi=" 
			<< fixed << setprecision(1) << parallelogram->perimeter();
		wstring perimeter(builder->str());

		SHAPE_DATA result = { shapeName, attributes, perimeter, area };
		return result;
	}
}

string ParallelogramToStringConverter::toString()
{
	return "ParallelogramToStringConverter";
}
