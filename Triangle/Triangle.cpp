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

    _first_edge = firstEgde;
    _second_edge = secondEdge;
    _third_edge = thirdEdge;
}

double myTriangle::Triangle::area()
{
    double p = (_first_edge + _second_edge + _third_edge) / 2;
    return sqrt(p*(p - _first_edge)*(p - _second_edge)*(p - _third_edge));
}

double myTriangle::Triangle::perimeter()
{
    return (_first_edge + _second_edge + _third_edge);
}

string myTriangle::Triangle::toString()
{
    return "Triangle";
}

double myTriangle::Triangle::first_edge()
{
    return (_first_edge);
}

double myTriangle::Triangle::second_edge()
{
    return (_second_edge);
}

double myTriangle::Triangle::third_edge()
{
    return (_third_edge);
}