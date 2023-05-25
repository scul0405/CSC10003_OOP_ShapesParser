#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	/// <summary>
	/// Class EllipseToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting an ellipse information to a tuple.
	/// </summary>
	class EllipseToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

