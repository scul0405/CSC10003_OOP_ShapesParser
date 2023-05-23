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

    _firstEgde = firstEgde;
    _secondEgde = secondEdge;
    _thirdEgde = thirdEdge;
}

double myTriangle::Triangle::area()
{
    double p = (_firstEgde + _secondEgde + _thirdEgde) / 2;
    return sqrt(p*(p - _firstEgde)*(p - _secondEgde)*(p - _thirdEgde));
}

double myTriangle::Triangle::perimeter()
{
    return (_firstEgde + _secondEgde + _thirdEgde);
}

string myTriangle::Triangle::toString()
{
    return "Triangle";
}

double myTriangle::Triangle::firstEgde()
{
    return (_firstEgde);
}

double myTriangle::Triangle::secondEgde()
{
    return (_secondEgde);
}

double myTriangle::Triangle::thirdEgde()
{
    return (_thirdEgde);
}