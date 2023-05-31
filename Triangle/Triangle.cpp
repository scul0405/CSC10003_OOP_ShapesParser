#include "pch.h"
#include "Triangle.h"

myTriangle::Triangle::Triangle(double firstEgde, double secondEdge, double thirdEdge)
{
    if (firstEgde < 0) {
        throw exception("The edge of a triangle cannot be negative or zero.");
    }
    
    if (secondEdge < 0) {
        throw exception("The edge of a triangle cannot be negative or zero.");
    }

    if (thirdEdge < 0) {
        throw exception("The edge of a triangle cannot be negative or zero.");
    }

    if (firstEgde + secondEdge <= thirdEdge || firstEgde + thirdEdge <= secondEdge || secondEdge + thirdEdge <= firstEgde) {
        throw exception("Three edges cannot be a triangle.");
    }

    _firstEdge = firstEgde;
    _secondEdge = secondEdge;
    _thirdEdge = thirdEdge;
}

double myTriangle::Triangle::area()
{
    double p = (_firstEdge + _secondEdge + _thirdEdge) / 2;
    return sqrt(p*(p - _firstEdge)*(p - _secondEdge)*(p - _thirdEdge));
}

double myTriangle::Triangle::perimeter()
{
    return (_firstEdge + _secondEdge + _thirdEdge);
}

string myTriangle::Triangle::toString()
{
    return "Triangle";
}

double myTriangle::Triangle::firstEdge()
{
    return (_firstEdge);
}

double myTriangle::Triangle::secondEdge()
{
    return (_secondEdge);
}

double myTriangle::Triangle::thirdEdge()
{
    return (_thirdEdge);
}