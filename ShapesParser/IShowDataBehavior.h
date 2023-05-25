#pragma once
#include "../utils/utils.h"
#include "Object.h"

class IShowDataBehavior : public Object
{
public:
	virtual void showData(vector<SHAPE_DATA>) = 0;
};

