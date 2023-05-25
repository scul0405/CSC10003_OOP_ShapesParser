#pragma once
#include "pch.h"

extern "C" {
	namespace myEllipse {
		/// <summary>
		/// Class Ellipse inherits from interface IShape and save information about an ellipse
		/// </summary>
		class Ellipse :
			public IShape
		{
			double _semi_minor_axis;
			double _semi_major_axis;
		public:
			Ellipse(double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double semi_minor_axis();
			double semi_major_axis();
		};
	};
}

