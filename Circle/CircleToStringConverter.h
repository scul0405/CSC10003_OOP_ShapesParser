#pragma once
#include "pch.h"
#include "Circle.h"

extern "C" {
	/// <summary>
	/// Class CircleToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a circle information to a tuple.
	/// </summary>
	class CircleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

