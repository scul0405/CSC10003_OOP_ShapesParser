#pragma once

#include "IShowDataBehavior.h"
#include "../utils/utils.h"

class ShowDataCustom : public IShowDataBehavior
{
public:
	void showData(vector<SHAPE_DATA>);
	string toString() override;
};

