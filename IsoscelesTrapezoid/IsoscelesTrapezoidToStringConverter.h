#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	/// <summary>
	/// Lớp IsoscelesTrapezoidToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình tròn sang tập dữ liệu
	/// </summary>
	class IsoscelesTrapezoidToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

