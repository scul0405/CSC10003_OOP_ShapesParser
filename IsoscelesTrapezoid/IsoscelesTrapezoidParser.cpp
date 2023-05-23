#include "pch.h"
#include "IsoscelesTrapezoidParser.h"


IsoscelesTrapezoidParser* IsoscelesTrapezoidParser::getInstance()
{
    if (!_instance) {
        _instance = new IsoscelesTrapezoidParser();
    }
    return _instance;
}

IShape* IsoscelesTrapezoidParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    regex doublePattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");

    if (data.str() == "") {
        return nullptr;
    }
    else {
        double top;
        double base;
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
        stringstream second_ss(second);
        getline(second_ss, buffer2, '=');
        getline(second_ss, buffer2, '=');

        string third;
        string buffer3;
        getline(data, third, ',');
        stringstream third_ss(third);
        getline(third_ss, buffer3, '=');
        getline(third_ss, buffer3, '=');


        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer1, doublePattern)
            || !regex_match(buffer2, doublePattern)
            || !regex_match(buffer3, doublePattern)) {
            return nullptr;
        }

        try {
            top = stof(buffer1);
            base = stof(buffer2);
            h = stof(buffer2);
            result = new myIsoscelesTrapezoid::IsoscelesTrapezoid(top, base, h);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}

string IsoscelesTrapezoidParser::toString()
{
    return "IsoscelesTrapezoidParser";
}
