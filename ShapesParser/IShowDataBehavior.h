#pragma once
#include "../utils/utils.h"
#include "Object.h"

/// <summary>
/// IShowDataBehavior interface is used for declare methods for subclasses to implement
/// </summary>
class IShowDataBehavior : public Object
{
public:
	/// <summary>
	/// Setting method for printing as data line
	/// </summary>
	/// <param name="data">Vector of SHAPE_DATA of IShape objects need to be printed</param>
	virtual void showData(vector<SHAPE_DATA> data) = 0;
};

