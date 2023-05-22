#pragma once
#include "pch.h"
#include "Triangle.h"

extern "C" {
	class TriangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

