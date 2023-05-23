#include "pch.h"
#include "RhombusParser.h"


RhombusParser* RhombusParser::getInstance()
{
    if (!_instance) {
        _instance = new RhombusParser();
    }
    return _instance;
}

IShape* RhombusParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    

    if (data.str() == "") {
        return nullptr;
    }
    else {
        double short_diagonal;
        double long_diagonal;

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

        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer1, DOUBLE_PATTERN)
            || !regex_match(buffer2, DOUBLE_PATTERN)) {
            return nullptr;
        }

        try {
            short_diagonal = stof(buffer1);
            long_diagonal = stof(buffer2);
            result = new myRhombus::Rhombus(short_diagonal, long_diagonal);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}

string RhombusParser::toString()
{
    return "RhombusParser";
}
