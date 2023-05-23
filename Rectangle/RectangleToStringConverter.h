#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	/// <summary>
	/// Lớp RectangleToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình chữ nhật sang tập dữ liệu
	/// </summary>
	class RectangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

