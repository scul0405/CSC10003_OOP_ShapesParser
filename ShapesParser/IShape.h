#pragma once
#include "../utils/utils.h"

class IShape
{
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
	virtual string toString() = 0;
};

