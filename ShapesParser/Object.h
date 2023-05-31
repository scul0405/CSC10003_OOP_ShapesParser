#pragma once
#include "../utils/utils.h"

/// <summary>
/// Object class is the largest superclass of all classes in the program
/// </summary>
class Object
{
public:
	/// <summary>
	/// Get a string representation of an object
	/// </summary>
	/// <returns>The string representation of an object</returns>
	virtual string toString() = 0;
};