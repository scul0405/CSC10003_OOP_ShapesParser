#pragma once
#include "pch.h"

extern "C" {
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

