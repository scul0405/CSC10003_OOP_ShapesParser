#pragma once
#include "pch.h"

extern "C" {
	namespace myIsoscelesTrapezoid {
		class IsoscelesTrapezoid :
			public IShape
		{
			float _top;
			float _base;
			float _height;
		public:
			IsoscelesTrapezoid(float, float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float top();
			float base();
			float height();
		};
	};
}

