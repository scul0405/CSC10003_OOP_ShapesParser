#include "pch.h"
#include "Circle.h"

Circle::Circle(double R) noexcept(false)
{
    if (R <= 0) {
        throw exception("Radius of a circle cannot be negative or zero.");
    }
    else {
        _radius = R;
    }
}

double Circle::area()
{
    return (3.14 * _radius * _radius);
}

double Circle::perimeter()
{
    return (2 * _radius * 3.14);
}

string Circle::toString()
{
    return "Circle";
}

double Circle::radius()
{

    return (_radius);
}
