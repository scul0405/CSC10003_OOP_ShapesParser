#include "pch.h"
#include "Ellipse.h"

myEllipse::Ellipse::Ellipse(double semi_minor_axis, double semi_major_axis)
{
    if (semi_minor_axis < 0) {
        throw exception("The semi-minor axis of a ellipse cannot be negative or zero.");
    }
    else if (semi_major_axis < 0) {
        throw exception("The semi-major axis of a ellipse cannot be negative or zero.");
    }
    else {
        _semi_minor_axis = semi_minor_axis;
        _semi_major_axis = semi_major_axis;
    }
}

double myEllipse::Ellipse::area()
{
    return (PI*_semi_minor_axis * _semi_major_axis);
}

double myEllipse::Ellipse::perimeter()
{
    double h = pow(_semi_minor_axis - _semi_major_axis, 2) / pow(_semi_minor_axis + _semi_major_axis, 2);

    return (PI*(_semi_minor_axis + _semi_major_axis)*(1 + ((3*h)/(10 + sqrt(4 - 3*h)))));
}

string myEllipse::Ellipse::toString()
{
    return "Ellipse";
}

double myEllipse::Ellipse::semi_major_axis()
{
    return (_semi_major_axis);
}

double myEllipse::Ellipse::semi_minor_axis()
{
    return (_semi_minor_axis);
}