#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	/// <summary>
	/// Lớp ParallelogramToStringConverter kế thừa từ interface IShapeToStringConverter thực hiện việc chuyển đổi
	/// thông tin hình bình hành sang tập dữ liệu
	/// </summary>
	class ParallelogramToStringConverter :
		public IShapeToStringConverter
	{
	public:
		SHAPE_DATA convert(IShape*) override;
		string toString() override;
	};
}

