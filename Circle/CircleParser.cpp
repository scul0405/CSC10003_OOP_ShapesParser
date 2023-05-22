#include "pch.h"
#include "CircleParser.h"

IShape* CircleParser::parse(stringstream data) noexcept(false)
{
    regex floatPattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");
    IShape* result = nullptr;

    if (data.str() == "") {
        return nullptr;
    }
    else {
        string first;
        float radius;
        getline(data, first, ',');
        stringstream first_ss(first);
        string buffer;
        getline(first_ss, buffer, '=');
        getline(first_ss, buffer, '=');

        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer, floatPattern)) {
            return nullptr;
        }

        try {
            radius = stof(buffer);          // Lỗi không chuyển được
            result = new Circle(radius);    // Lỗi khởi tạo
        }
        catch (...) {
            return nullptr;
        }
    }

    return result;
}