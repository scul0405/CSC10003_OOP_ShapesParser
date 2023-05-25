#pragma once
#include "pch.h"
#include "Triangle.h"

extern "C" {
	/// <summary>
	/// Class TriangleToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a triangle information to a tuple.
	/// </summary>
	class TriangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

