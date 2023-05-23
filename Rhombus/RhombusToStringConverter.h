#pragma once
#include "pch.h"
#include "Rhombus.h"

extern "C" {
	/// <summary>
	/// Lớp RhombusToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình thoi sang tập dữ liệu
	/// </summary>
	class RhombusToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

