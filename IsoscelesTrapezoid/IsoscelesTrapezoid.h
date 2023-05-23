#pragma once
#include "pch.h"

extern "C" {
	namespace myIsoscelesTrapezoid {
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

