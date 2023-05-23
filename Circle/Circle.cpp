#include "pch.h"
#include "Circle.h"

myCircle::Circle::Circle(double R) noexcept(false)
{
    if (R <= 0) {
        throw exception("Radius of a circle cannot be negative or zero.");
    }
    else {
        _radius = R;
    }
}

double myCircle::Circle::area()
{
    return (3.14 * _radius * _radius);
}

double myCircle::Circle::perimeter()
{
    return (2 * _radius * 3.14);
}

string myCircle::Circle::toString()
{
    return "Circle";
}

double myCircle::Circle::radius()
{

    return (_radius);
}
