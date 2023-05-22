#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	class RectangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

