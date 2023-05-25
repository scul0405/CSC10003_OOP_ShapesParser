#pragma once
#include "pch.h"

extern "C" {
	namespace myTriangle {
		/// <summary>
		/// Class Triangle inherits from interface IShape and save information about a triangle
		/// </summary>
		class Triangle :
			public IShape
		{
			double _firstEgde;
			double _secondEgde;
			double _thirdEgde;
		public:
			Triangle(double, double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double firstEgde();
			double secondEgde();
			double thirdEgde();
		};
	};
}

