#pragma once
#include "pch.h"

extern "C" {
	namespace myRhombus {
		/// <summary>
		/// Class Rhombus inherits from interface IShape and save information about a rhombus
		/// </summary>
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

