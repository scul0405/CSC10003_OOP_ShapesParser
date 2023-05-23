#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	/// <summary>
	/// Lớp EllipseParser kế thừa từ interface IParser thực hiện việc phân tích hình e-líp
	/// </summary>
	class EllipseParser :
		public IParser
	{
	private:
		inline static EllipseParser* _instance = nullptr;

		EllipseParser() = default;
		~EllipseParser() = default;
		EllipseParser(const EllipseParser&) = delete;
		EllipseParser& operator=(const EllipseParser&) = delete;
	public:
		static EllipseParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


