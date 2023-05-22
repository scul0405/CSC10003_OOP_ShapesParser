#include "ShapesPrinter.h"

ShapesPrinter::ShapesPrinter()
{
	_data = vector<SHAPE_DATA>();
	_showTableBehavior = new ShowTableDefault;
	_showDataBehavior = new ShowDataDefault;
}

void ShapesPrinter::setShowDataBehavior(IShowDataBehavior* showDataBehavior)
{
	_showDataBehavior = showDataBehavior;
}

void ShapesPrinter::performShowDataBehavior(vector<SHAPE_DATA> data)
{
	_showDataBehavior->showData(data);
}

void ShapesPrinter::setShowTableBehavior(IShowTableBehavior* showTableBehavior)
{
	_showTableBehavior = showTableBehavior;
}

void ShapesPrinter::performShowTableBehavior(vector<SHAPE_DATA> data)
{
	_showTableBehavior->showTable(data);
}

void ShapesPrinter::push(SHAPE_DATA other)
{
	_data.push_back(other);
}

void ShapesPrinter::clear(SHAPE_DATA)
{
	_data.clear();
}


vector<SHAPE_DATA> ShapesPrinter::getData()
{
	return _data;
}


