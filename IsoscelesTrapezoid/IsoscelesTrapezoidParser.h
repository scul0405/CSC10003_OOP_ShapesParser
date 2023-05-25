#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	/// <summary>
	/// Class IsoscelesTrapezoidParser inherits from interface IParser and performs parsing for an isosceles trapezoid
	/// </summary>
	class IsoscelesTrapezoidParser :
		public IParser
	{
	private:
		inline static IsoscelesTrapezoidParser* _instance = nullptr;

		IsoscelesTrapezoidParser() = default;
		~IsoscelesTrapezoidParser() = default;
		IsoscelesTrapezoidParser(const IsoscelesTrapezoidParser&) = delete;
		IsoscelesTrapezoidParser& operator=(const IsoscelesTrapezoidParser&) = delete;
	public:
		static IsoscelesTrapezoidParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


