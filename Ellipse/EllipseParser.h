#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	/// <summary>
	/// Class EllipseParser inherits from interface IParser and performs parsing for an ellipse
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


