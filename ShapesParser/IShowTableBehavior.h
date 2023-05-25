#pragma once
#include "../utils/utils.h"
#include "Object.h"

class IShowTableBehavior : public Object
{
public:
	virtual void showTable(vector<SHAPE_DATA>) = 0;
};

