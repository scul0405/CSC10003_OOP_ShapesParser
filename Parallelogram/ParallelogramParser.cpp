#include "pch.h"
#include "ParallelogramParser.h"


ParallelogramParser* ParallelogramParser::getInstance()
{
    if (!_instance) {
        _instance = new ParallelogramParser();
    }
    return _instance;
}

IShape* ParallelogramParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    

    if (data.str() == "") {
        return nullptr;
    }
    else {
        double s;
        double b;
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
            || !regex_match(buffer1, DOUBLE_PATTERN)
            || !regex_match(buffer2, DOUBLE_PATTERN)
            || !regex_match(buffer3, DOUBLE_PATTERN)) {
            return nullptr;
        }

        try {
            s = stof(buffer1);
            b = stof(buffer2);
            h = stof(buffer3);
            result = new myParallelogram::Parallelogram(s, b, h);
        }
        catch (...) {
            return nullptr; 
        }
    }

    return result;
}

string ParallelogramParser::toString()
{
    return "ParallelogramParser";
}
