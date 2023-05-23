#pragma once
#include "pch.h"
#include "Rhombus.h"

extern "C" {
	/// <summary>
	/// Lớp RhombusParser kế thừa từ interface IParser thực hiện việc phân tích hình thoi
	/// </summary>
	class RhombusParser :
		public IParser
	{
	private:
		inline static RhombusParser* _instance = nullptr;

		RhombusParser() = default;
		~RhombusParser() = default;
		RhombusParser(const RhombusParser&) = delete;
		RhombusParser& operator=(const RhombusParser&) = delete;
	public:
		static RhombusParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


