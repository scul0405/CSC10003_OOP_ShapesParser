#include "pch.h"
#include "Square.h"

mySquare::Square::Square(float len)
{
	if (len <= 0) {
		throw std::exception("Length of the side of a square cannot be negative or zero");
	}
	else {
		_length = len;
	}
}

float mySquare::Square::area()
{
	return (_length * _length);
}

float mySquare::Square::perimeter()
{
	return (4 * _length);
}

string mySquare::Square::toString()
{
	return "Square";
}


float mySquare::Square::length()
{
	return (_length);
}