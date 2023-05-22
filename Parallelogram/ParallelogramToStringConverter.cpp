#include "pch.h"
#include "ParallelogramToStringConverter.h"

SHAPE_DATA ParallelogramToStringConverter::convert(IShape* shape)
{
	myParallelogram::Parallelogram* Parallelogram = dynamic_cast<myParallelogram::Parallelogram*>(shape);
	wstringstream* builder = new wstringstream;

	wstring shapeName = L"Hình bình hành";

	*builder << L"Cạnh bên=" << Parallelogram->side()
		<< L", Cạnh đáy=" << Parallelogram->base()
		<< L", Đường cao =" << Parallelogram->height();
	wstring attributes(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Diện tích=" 
		<< fixed << setprecision(2) << Parallelogram->area();
	wstring area(builder->str());

	//reset 
	delete builder;
	builder = new wstringstream;

	*builder << L"Chu vi=" 
		<< fixed << setprecision(1) << Parallelogram->perimeter();
	wstring perimeter(builder->str());

	SHAPE_DATA result = { shapeName, attributes, perimeter, area };
	return result;
}