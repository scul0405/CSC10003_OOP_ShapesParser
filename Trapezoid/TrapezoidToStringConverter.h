#pragma once
#include "pch.h"
#include "Trapezoid.h"

extern "C" {
	class TrapezoidToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

