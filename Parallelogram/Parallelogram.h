#pragma once
#include "pch.h"

extern "C" {
	namespace myParallelogram {
		class Parallelogram :
			public IShape
		{
			float _side;
			float _base;
			float _height;
		public:
			Parallelogram(float, float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float side();
			float base();
			float height();
		};
	};
}

