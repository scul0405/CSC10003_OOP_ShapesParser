#include "pch.h"
#include "CircleParser.h"

CircleParser* CircleParser::getInstance()
{
    if (!_instance) {
        _instance = new CircleParser();
    }
    return _instance;
}

IShape* CircleParser::parse(stringstream data) noexcept(false)
{
    
    IShape* result = nullptr;

    if (data.str() == "") {
        return nullptr;
    }
    else {
        string first;
        double radius;
        getline(data, first, ',');
        stringstream first_ss(first);
        string buffer;
        getline(first_ss, buffer, '=');
        getline(first_ss, buffer, '=');

        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer, DOUBLE_PATTERN)) {
            return nullptr;
        }

        try {
            radius = stof(buffer);
            result = new myCircle::Circle(radius);
        }
        catch (...) {
            return nullptr;
        }
    }

    return result;
}

string CircleParser::toString()
{
    return "CircleParser";
}
