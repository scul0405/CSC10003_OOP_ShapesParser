#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// Lớp giao diện của các lớp converter tương ứng của từng hình
/// </summary>
class IShapeToStringConverter : public Object
{
public:
	virtual SHAPE_DATA convert(IShape*) = 0;
};

