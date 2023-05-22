#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	class EllipseParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


