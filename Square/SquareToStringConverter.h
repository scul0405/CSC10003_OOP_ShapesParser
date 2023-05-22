#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
	class SquareToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

