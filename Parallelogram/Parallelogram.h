#pragma once
#include "pch.h"

extern "C" {
	namespace myParallelogram {
		/// <summary>
		/// Lớp Parallelogram kế thừa từ interface IShape lưu thông tin hình bình hành
		/// </summary>
		class Parallelogram :
			public IShape
		{
			double _side;
			double _base;
			double _height;
		public:
			Parallelogram(double, double, double) noexcept(false);
			double area() override;
			double perimeter() override;
			string toString() override;
			double side();
			double base();
			double height();
		};
	};
}

