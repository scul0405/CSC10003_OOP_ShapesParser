#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	/// <summary>
	/// Lớp EllipseToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình e-líp sang tập dữ liệu
	/// </summary>
	class EllipseToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

