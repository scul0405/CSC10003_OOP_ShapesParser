#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
	/// <summary>
	/// Class SquareToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a square information to a tuple.
	/// </summary>
	class SquareToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

