#pragma once
#include "IShape.h"
#include "IShapeToStringConverter.h"
#include "../utils/utils.h"
#include "Object.h"

/// <summary>
/// Lớp lựa chọn việc tạo ra đối tượng converter thông qua mô hình nhà máy
/// </summary>
class ConverterFactory : public Object
{
    map<string, IShapeToStringConverter*> _prototypes;
public:

    void registerWith(string type, IShapeToStringConverter* parser);

    IShapeToStringConverter* select(string type);
    string toString() override;
};

