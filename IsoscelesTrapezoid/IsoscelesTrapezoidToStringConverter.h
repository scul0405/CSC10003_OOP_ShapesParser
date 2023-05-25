#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	/// <summary>
	/// Class IsoscelesTrapezoidToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting an isosceles trapezoid information to a tuple.
	/// </summary>
	class IsoscelesTrapezoidToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

