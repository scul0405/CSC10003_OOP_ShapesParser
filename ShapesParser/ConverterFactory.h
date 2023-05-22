#pragma once
#include "IShape.h"
#include "IShapeToStringConverter.h"
#include "../utils/utils.h"\

class ConverterFactory
{
    map<string, IShapeToStringConverter*> _prototypes;
public:

    void registerWith(string type, IShapeToStringConverter* parser);

    // Ssingle source of truth
    IShapeToStringConverter* select(string type);
};

