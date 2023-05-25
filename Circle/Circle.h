#pragma once
#include "pch.h"

extern "C" {
	namespace myCircle {
		/// <summary>
		/// Class Circle inherits from interface IShape and save information about a circle
		/// </summary>
		class Circle :
			public IShape
		{
			double _radius;
		public:
			Circle(double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double radius();
		};
	}
}

