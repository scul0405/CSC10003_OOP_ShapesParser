#pragma once
#include "pch.h"
#include "Trapezoid.h"

extern "C" {
	class TrapezoidParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


