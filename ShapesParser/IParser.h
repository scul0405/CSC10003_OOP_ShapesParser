#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

class IParser : public Object
{
public:
    virtual IShape* parse(stringstream data) noexcept(false) = 0;
};

