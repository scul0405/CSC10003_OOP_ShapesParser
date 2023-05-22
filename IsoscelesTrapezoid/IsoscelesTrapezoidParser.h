#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	class IsoscelesTrapezoidParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


