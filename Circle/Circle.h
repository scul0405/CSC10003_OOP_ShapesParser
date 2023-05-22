#pragma once
#include "pch.h"

extern "C" {
	class Circle : 
		public IShape
	{
		float _radius;
	public:
		Circle(float) noexcept(false);
		float area() override;
		float perimeter() override;
		string toString() override;
		float radius();
	};
}

