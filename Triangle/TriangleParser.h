#pragma once
#include "pch.h"
#include "Triangle.h"

extern "C" {
	class TriangleParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


