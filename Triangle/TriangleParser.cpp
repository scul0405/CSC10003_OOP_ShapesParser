#include "pch.h"
#include "TriangleParser.h"


TriangleParser* TriangleParser::getInstance()
{
    if (!_instance) {
        _instance = new TriangleParser();
    }
    return _instance;
}

IShape* TriangleParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    

    if (data.str() == "") {
        return nullptr;
    }
    else {
        double e1;
        double e2;
        double e3;

        string first;
        string buffer1;
        getline(data, first, ',');
        stringstream first_ss(first);
        getline(first_ss, buffer1, '=');
        getline(first_ss, buffer1, '=');

        string second;
        string buffer2;
        getline(data, second, ',');
        stringstream secound_ss(second);
        getline(secound_ss, buffer2, '=');
        getline(secound_ss, buffer2, '=');

        string third;
        string buffer3;
        getline(data, third, ',');
        stringstream third_ss(third);
        getline(third_ss, buffer3, '=');
        getline(third_ss, buffer3, '=');

        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer1, DOUBLE_PATTERN)
            || !regex_match(buffer2, DOUBLE_PATTERN)
            || !regex_match(buffer3, DOUBLE_PATTERN)) {
            return nullptr;
        }

        try {
            e1 = stof(buffer1);
            e2 = stof(buffer2);
            e3 = stof(buffer3);
            result = new myTriangle::Triangle(e1, e2, e3);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}

string TriangleParser::toString()
{
    return "TriangleParser";
}
