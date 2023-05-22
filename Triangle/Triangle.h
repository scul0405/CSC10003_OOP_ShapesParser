#pragma once
#include "pch.h"

extern "C" {
	namespace myTriangle {
		class Triangle :
			public IShape
		{
			float _firstEgde;
			float _secondEgde;
			float _thirdEgde;
		public:
			Triangle(float, float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float firstEgde();
			float secondEgde();
			float thirdEgde();
		};
	};
}

