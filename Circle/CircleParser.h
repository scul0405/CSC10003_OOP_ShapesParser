#pragma once
#include "pch.h"
#include "Circle.h"

extern "C" {
	class CircleParser :
		public IParser
	{
	private:
		inline static CircleParser* _instance = nullptr;

		CircleParser() = default;
		~CircleParser() = default;
		CircleParser(const CircleParser&) = delete;
		CircleParser& operator=(const CircleParser&) = delete;
	public:
		static CircleParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}

