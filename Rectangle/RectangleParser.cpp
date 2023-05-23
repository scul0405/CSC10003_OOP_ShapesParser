#include "pch.h"
#include "RectangleParser.h"


RectangleParser* RectangleParser::getInstance()
{
    if (!_instance) {
        _instance = new RectangleParser();
    }
    return _instance;
}

IShape* RectangleParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    regex doublePattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");

    if (data.str() == "") {
        return nullptr;
    }
    else {
        double w;
        double h;

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
            || !regex_match(buffer1, doublePattern)
            || !regex_match(buffer2, doublePattern)) {
            return nullptr;
        }

        try {
            h = stof(buffer1);
            w = stof(buffer2);
            result = new myRectangle::Rectangle(w, h);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}

string RectangleParser::toString()
{
    return "RectangleParser";
}
