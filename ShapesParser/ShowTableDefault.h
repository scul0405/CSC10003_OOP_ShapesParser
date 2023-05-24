#pragma once
#include "IShowTableBehavior.h"
#include "../utils/utils.h"


class ShowTableDefault : public IShowTableBehavior
{
public:
	void showTable(vector<SHAPE_DATA>);
	string toString() override;
};

