#pragma once
#include "pch.h"
#include "Circle.h"

extern "C" {
	/// <summary>
	/// Lớp CircleToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình tròn sang tập dữ liệu
	/// </summary>
	class CircleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

