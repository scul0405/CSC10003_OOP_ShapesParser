#pragma once
#include "pch.h"
#include "Rhombus.h"

extern "C" {
	/// <summary>
	/// Class RhombusToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a rhombus information to a tuple.
	/// </summary>
	class RhombusToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

