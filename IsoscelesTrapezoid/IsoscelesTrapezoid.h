#pragma once
#include "pch.h"

extern "C" {
	namespace myIsoscelesTrapezoid {
		/// <summary>
		/// Lớp IsoscelesTrapezoid kế thừa từ interface IShape lưu thông tin hình thang cân
		/// </summary>
		class IsoscelesTrapezoid :
			public IShape
		{
			double _top;
			double _base;
			double _height;
		public:
			IsoscelesTrapezoid(double, double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double top();
			double base();
			double height();
		};
	};
}

