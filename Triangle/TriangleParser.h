#pragma once
#include "pch.h"
#include "Triangle.h"

extern "C" {
	/// <summary>
	/// Class TriangleParser inherits from interface IParser and performs parsing for a triangle
	/// </summary>
	class TriangleParser :
		public IParser
	{
	private:
		inline static TriangleParser* _instance = nullptr;

		TriangleParser() = default;
		~TriangleParser() = default;
		TriangleParser(const TriangleParser&) = delete;
		TriangleParser& operator=(const TriangleParser&) = delete;
	public:
		static TriangleParser* getInstance();
		IShape* parse(stringstream data) noexcept(false) override;
		string toString() override;
	};
}


