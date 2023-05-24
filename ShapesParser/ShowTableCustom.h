#pragma once

#include "IShowTableBehavior.h"
#include "../utils/utils.h"

class ShowTableCustom : public IShowTableBehavior
{
public:
	void showTable(vector<SHAPE_DATA>);
	string toString() override;
};

