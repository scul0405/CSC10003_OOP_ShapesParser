#pragma once
#include "pch.h"
#include "Triangle.h"

extern "C" {
	/// <summary>
	/// Lớp TriangleToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình tam giác sang tập dữ liệu
	/// </summary>
	class TriangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

