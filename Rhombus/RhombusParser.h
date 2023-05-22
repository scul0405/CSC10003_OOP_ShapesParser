#pragma once
#include "pch.h"
#include "Rhombus.h"

extern "C" {
	class RhombusParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


