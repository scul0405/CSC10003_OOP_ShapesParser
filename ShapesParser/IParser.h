#pragma once
#include "IShape.h"
#include "Object.h"
#include "../utils/utils.h"

/// <summary>
/// Lớp giao diện cho các lớp parser tương ứng của từng hình
/// </summary>
class IParser : public Object
{
public:
    virtual IShape* parse(stringstream data) noexcept(false) = 0;
};

