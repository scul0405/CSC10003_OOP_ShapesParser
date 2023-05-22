#pragma once
#include "pch.h"

extern "C" {
	namespace myRectangle {
		class Rectangle :
			public IShape
		{
			float _width;
			float _height;
		public:
			Rectangle(float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float width();
			float height();
		};
	};
}

