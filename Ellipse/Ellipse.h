#pragma once
#include "pch.h"

extern "C" {
	namespace myEllipse {
		class Ellipse :
			public IShape
		{
			float _semi_minor_axis;
			float _semi_major_axis;
		public:
			Ellipse(float, float) noexcept(false);
			float area() override;
			float perimeter() override;
			string toString() override;
			float semi_minor_axis();
			float semi_major_axis();
		};
	};
}

