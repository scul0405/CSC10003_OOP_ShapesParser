#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	/// <summary>
	/// Class ParallelogramToStringConverter inherits from interface IShapeToStringConverter and performs
	/// converting a parallelogram information to a tuple.
	/// </summary>
	class ParallelogramToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

