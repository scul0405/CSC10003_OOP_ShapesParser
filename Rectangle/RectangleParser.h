#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	/// <summary>
	/// Class RectangleParser inherits from interface IParser and performs parsing for a rectangle
	/// </summary>
	class RectangleParser :
		public IParser
	{
	private:
		inline static RectangleParser* _instance = nullptr;

		RectangleParser() = default;
		~RectangleParser() = default;
		RectangleParser(const RectangleParser&) = delete;
		RectangleParser& operator=(const RectangleParser&) = delete;
	public:
		static RectangleParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


