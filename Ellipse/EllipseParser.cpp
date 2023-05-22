#include "pch.h"
#include "EllipseParser.h"


IShape* EllipseParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    regex floatPattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");

    if (data.str() == "") {
        return nullptr;
    }
    else {
        float semi_minor_axis;
        float semi_major_axis;

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
            || !regex_match(buffer1, floatPattern)
            || !regex_match(buffer2, floatPattern)) {
            return nullptr;
        }

        try {
            semi_minor_axis = stof(buffer1);
            semi_major_axis = stof(buffer2);
            result = new myEllipse::Ellipse(semi_minor_axis, semi_major_axis);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}
