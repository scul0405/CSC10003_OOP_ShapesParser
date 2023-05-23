#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
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

