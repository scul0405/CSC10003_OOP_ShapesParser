#include "pch.h"
#include "Triangle.h"

myTriangle::Triangle::Triangle(float firstEgde, float secondEdge, float thirdEdge)
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

float myTriangle::Triangle::area()
{
    float p = (_firstEgde + _secondEgde + _thirdEgde) / 2;
    return sqrt(p*(p - _firstEgde)*(p - _secondEgde)*(p - _thirdEgde));
}

float myTriangle::Triangle::perimeter()
{
    return (_firstEgde + _secondEgde + _thirdEgde);
}

string myTriangle::Triangle::toString()
{
    return "Triangle";
}

float myTriangle::Triangle::firstEgde()
{
    return (_firstEgde);
}

float myTriangle::Triangle::secondEgde()
{
    return (_secondEgde);
}

float myTriangle::Triangle::thirdEgde()
{
    return (_thirdEgde);
}