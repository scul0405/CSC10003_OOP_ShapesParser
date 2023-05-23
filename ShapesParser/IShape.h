#pragma once
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// Lớp giao diện thể hiện cho các hình
/// </summary>
class IShape : public Object
{
public:
	/// <summary>
	/// Tính toán diện tích của hình
	/// </summary>
	/// <returns></returns>
	virtual double area() = 0;

	/// <summary>
	/// Tính toán chu vi của hình
	/// </summary>
	/// <returns></returns>
	virtual double perimeter() = 0;
};

