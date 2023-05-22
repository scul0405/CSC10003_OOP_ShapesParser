#pragma once
#include "../utils/utils.h"
#include "../ShapesParser/IShape.h"
#include "IShowTableBehavior.h"
#include "IShowDataBehavior.h"
#include "ShowTableDefault.h"
#include "ShowDataDefault.h"

class ShapesPrinter
{
	vector<SHAPE_DATA> _data;
	IShowTableBehavior* _showTableBehavior;
	IShowDataBehavior* _showDataBehavior;
public:
	ShapesPrinter();
	void setShowDataBehavior(IShowDataBehavior*);
	void performShowDataBehavior(vector<SHAPE_DATA>);
	void setShowTableBehavior(IShowTableBehavior*);
	void performShowTableBehavior(vector<SHAPE_DATA>);
	void push(SHAPE_DATA);
	void clear(SHAPE_DATA);
	vector<SHAPE_DATA> getData();
};

