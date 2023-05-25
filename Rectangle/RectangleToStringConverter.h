#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	/// <summary>
	/// Class RectangleToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a rectangle information to a tuple.
	/// </summary>
	class RectangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

