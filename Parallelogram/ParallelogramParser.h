#pragma once
#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	/// <summary>
	/// Lớp ParallelogramParser kế thừa từ interface IParser thực hiện việc phân tích hình bình hành
	/// </summary>
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


