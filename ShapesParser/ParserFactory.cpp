#include "ParserFactory.h"

void ParserFactory::registerWith(string type, IParser* parser)
{
    _prototypes.insert({ type, parser });
}

IParser* ParserFactory::select(string type)
{
    IParser* parser = nullptr;

    if (_prototypes.contains(type)) {
        parser = _prototypes[type];
    }

    return parser;
}

string ParserFactory::toString()
{
    return "ParserFactory";
}
