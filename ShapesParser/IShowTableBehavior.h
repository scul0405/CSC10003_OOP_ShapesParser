#pragma once
#include "../utils/utils.h"
#include "Object.h"

/// <summary>
/// IShowTableBehavior interface is used for declare methods for subclasses to implement
/// </summary>
class IShowTableBehavior : public Object
{
public:
	/// <summary>
	/// Setting method for printing as data sheet
	/// </summary>
	/// <param name="data">Vector of SHAPE_DATA of IShape objects need to be printed</param>
	virtual void showTable(vector<SHAPE_DATA>) = 0;
};

