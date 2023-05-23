#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	class ParallelogramToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

