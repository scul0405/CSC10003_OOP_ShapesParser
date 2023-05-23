#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
	/// <summary>
	/// Lớp SquareToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình vuông sang tập dữ liệu
	/// </summary>
	class SquareToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

