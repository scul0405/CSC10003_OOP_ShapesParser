#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	class ParallelogramParser :
		public IParser
	{
	private:
		inline static ParallelogramParser* _instance = nullptr;

		ParallelogramParser() = default;
		~ParallelogramParser() = default;
		ParallelogramParser(const ParallelogramParser&) = delete;
		ParallelogramParser& operator=(const ParallelogramParser&) = delete;
	public:
		static ParallelogramParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


