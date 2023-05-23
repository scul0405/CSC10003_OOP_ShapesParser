#pragma once
#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	/// <summary>
	/// Lớp IsoscelesTrapezoidParser kế thừa từ interface IParser thực hiện việc phân tích hình thang cân
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


