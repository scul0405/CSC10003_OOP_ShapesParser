#pragma once
#include "IShape.h"
#include "IParser.h"
#include "../utils/utils.h"

class ParserFactory
{
    map<string, IParser*> _prototypes;
public:

    void registerWith(string type, IParser* parser);

    // Ssingle source of truth
    IParser* select(string type);
};

