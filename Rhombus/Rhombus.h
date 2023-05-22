#pragma once
#include "pch.h"

extern "C" {
	namespace myRhombus {
		class Rhombus :
			public IShape
		{
			float _short_diagonal;
			float _long_diagonal;
		public:
			Rhombus(float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float short_diagonal();
			float long_diagonal();
		};
	};
}

