#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	class ParallelogramParser :
		public IParser
	{
	public:
		IShape* parse(stringstream data) noexcept(false) override;
	};
}


