#pragma once
#include "IShape.h"
#include "IParser.h"
#include "../utils/utils.h"

/// <summary>
/// Lớp lựa chọn việc tạo ra đối tượng parser thông qua mô hình nhà máy
/// </summary>
class ParserFactory
{
    map<string, IParser*> _prototypes;
public:

    void registerWith(string type, IParser* parser);

    IParser* select(string type);
};

