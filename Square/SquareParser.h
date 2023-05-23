#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
	/// <summary>
	/// Lớp SquareParser kế thừa từ interface IParser thực hiện việc phân tích hình vuông
	/// </summary>
	class SquareParser :
		public IParser
	{
	private:
		inline static SquareParser* _instance = nullptr;

		SquareParser() = default;
		~SquareParser() = default;
		SquareParser(const SquareParser&) = delete;
		SquareParser& operator=(const SquareParser&) = delete;
	public:
		static SquareParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}

