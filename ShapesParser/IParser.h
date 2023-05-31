#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// IParser interface is used for declare methods for subclasses to implement
/// </summary>
class IParser : public Object
{
public:
    /// <summary>
    /// Method to parse from user input
    /// </summary>
    /// <param name="data">User input</param>
    /// <returns>IShape* object</returns>
    virtual IShape* parse(stringstream data) noexcept(false) = 0;
};

