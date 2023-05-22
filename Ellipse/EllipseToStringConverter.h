#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	class EllipseToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
	};
}

