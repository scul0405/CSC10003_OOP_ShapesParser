#pragma once
#include "pch.h"
#include "Circle.h"

extern "C" {
	class CircleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

