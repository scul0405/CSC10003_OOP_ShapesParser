#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	class IsoscelesTrapezoidToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

