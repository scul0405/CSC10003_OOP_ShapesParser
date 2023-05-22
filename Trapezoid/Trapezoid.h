#pragma once
#include "pch.h"

extern "C" {
	namespace myTrapezoid {
		class Trapezoid :
			public IShape
		{
			float _top;
			float _base;
			float _height;
		public:
			Trapezoid(float, float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float top();
			float base();
			float height();
		};
	};
}

