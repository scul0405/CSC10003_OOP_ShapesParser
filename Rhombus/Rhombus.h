#pragma once
#include "pch.h"

extern "C" {
	namespace myRhombus {
		class Rhombus :
			public IShape
		{
			double _short_diagonal;
			double _long_diagonal;
		public:
			Rhombus(double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double short_diagonal();
			double long_diagonal();
		};
	};
}

