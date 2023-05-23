#pragma once
#include "pch.h"

extern "C" {
	namespace myTriangle {
		/// <summary>
		/// Lớp Triangle kế thừa từ interface IShape lưu thông tin hình tam giác
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

