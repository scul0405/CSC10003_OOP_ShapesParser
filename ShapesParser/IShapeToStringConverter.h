#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

class IShapeToStringConverter : public Object
{
public:
	virtual SHAPE_DATA convert(IShape*) = 0;
};

