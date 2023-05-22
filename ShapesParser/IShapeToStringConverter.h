#pragma once
#include "IShape.h"
#include "../utils/utils.h"

class IShapeToStringConverter
{
public:
	virtual SHAPE_DATA convert(IShape*) = 0;
};

