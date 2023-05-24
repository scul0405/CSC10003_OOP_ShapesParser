#include "ConverterFactory.h"

void ConverterFactory::registerWith(string type, IShapeToStringConverter* converter)
{
    _prototypes.insert({ type, converter });
}

IShapeToStringConverter* ConverterFactory::select(string type)
{
    IShapeToStringConverter* converter = nullptr;

    if (_prototypes.contains(type)) {
        converter = _prototypes[type];
    }

    return converter;
}

string ConverterFactory::toString()
{
    return "ConverterFactory";
}
