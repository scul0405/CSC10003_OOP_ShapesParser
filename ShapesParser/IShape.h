#pragma once
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// IShape interface is used for declare methods for subclasses to implement
/// </summary>
class IShape : public Object
{
public:
	/// <summary>
	/// Get the area of an object
	/// </summary>
	/// <returns>The area of the object</returns>
	virtual double area() = 0;

	/// <summary>
	/// Get the perimeter of an object
	/// </summary>
	/// <returns>The perimeter of an object</returns>
	virtual double perimeter() = 0;
};

