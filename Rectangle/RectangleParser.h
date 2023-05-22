#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	class RectangleParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


