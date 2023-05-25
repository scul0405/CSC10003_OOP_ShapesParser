#pragma once
#include "pch.h"

extern "C" {
	namespace myParallelogram {
		/// <summary>
		/// Class Parallelogram inherits from interface IShape and save information about a parallelogram
		/// </summary>
		class Parallelogram :
			public IShape
		{
			double _side;
			double _base;
			double _height;
		public:
			Parallelogram(double, double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double side();
			double base();
			double height();
		};
	};
}

