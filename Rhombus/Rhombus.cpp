#include "pch.h"
#include "Rhombus.h"

myRhombus::Rhombus::Rhombus(double short_diagonal, double long_diagonal)
{
    if (short_diagonal < 0) {
        throw exception("The short diagonal of a rhombus cannot be negative or zero.");
    }
    else if (long_diagonal < 0) {
        throw exception("The long diagonal of a rhombus cannot be negative or zero.");
    }
    else {
        _short_diagonal = short_diagonal;
        _long_diagonal = long_diagonal;
    }
}

double myRhombus::Rhombus::area()
{
    return (_short_diagonal * _long_diagonal);
}

double myRhombus::Rhombus::perimeter()
{
    double edge = sqrt(pow(_short_diagonal, 2) + pow(_long_diagonal, 2)) / 2;
    return (4 * edge);
}

string myRhombus::Rhombus::toString()
{
    return "Rhombus";
}

double myRhombus::Rhombus::short_diagonal()
{
    return (_short_diagonal);
}

double myRhombus::Rhombus::long_diagonal()
{
    return (_long_diagonal);
}