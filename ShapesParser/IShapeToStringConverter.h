#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// IShapeToStringConverter interface is used for declare methods for subclasses to implement
/// </summary>
class IShapeToStringConverter : public Object
{
public:
	/// <summary>
	/// Method to convert IShape object to SHAPE_DATA data type
	/// </summary>
	/// <param name="shape">IShape object needs to be converted</param>
	/// <returns>SHAPE_DATA data type of the input object</returns>
	virtual SHAPE_DATA convert(IShape* shape) = 0;
};

