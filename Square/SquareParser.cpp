#include "pch.h"
#include "SquareParser.h"

SquareParser* SquareParser::getInstance()
{
    if (!_instance) {
        _instance = new SquareParser();
    }
    return _instance;
}

IShape* SquareParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    regex doublePattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");

    if (data.str() == "") {
        return nullptr;
    }
    else {
        string first;
        double len;

        getline(data, first, ',');
        stringstream first_ss(first);

        string buffer;
        getline(first_ss, buffer, '=');
        getline(first_ss, buffer, '=');

        string end;
        getline(data, end);

        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer, doublePattern)) {
            return nullptr;
        }

 
        try {
            len = stof(buffer);
            result = new mySquare::Square(len);
        }
        catch (...) {
            return nullptr;
        }
    }

    return result;
}

string SquareParser::toString()
{
    return "SquareParser";
}
