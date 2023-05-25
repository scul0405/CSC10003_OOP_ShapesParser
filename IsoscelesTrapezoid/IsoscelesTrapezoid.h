#pragma once
#include "pch.h"

extern "C" {
	namespace myIsoscelesTrapezoid {
		/// <summary>
		/// Class IsoscelesTrapezoid inherits from interface IShape and save information about an isosceles trapezoid
		/// </summary>
		class IsoscelesTrapezoid :
			public IShape
		{
			double _top;
			double _base;
			double _height;
		public:
			IsoscelesTrapezoid(double, double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double top();
			double base();
			double height();
		};
	};
}

