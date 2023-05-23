#pragma once
#include "pch.h"

extern "C" {
	namespace myCircle {
		/// <summary>
		/// Lớp Circle kế thừa từ interface IShape lưu thông tin hình tròn
		/// </summary>
		class Circle :
			public IShape
		{
			double _radius;
		public:
			Circle(double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double radius();
		};
	}
}

