#pragma once
#include "pch.h"

extern "C" {
	namespace myRectangle {
		/// <summary>
		/// Class Rectangle inherits from interface IShape and save information about a rectangle
		/// </summary>
		class Rectangle :
			public IShape
		{
			double _width;
			double _height;
		public:
			Rectangle(double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double width();
			double height();
		};
	};
}

