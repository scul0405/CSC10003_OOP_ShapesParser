#pragma once
#include "pch.h"
#include "Rhombus.h"

extern "C" {
	class RhombusToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

