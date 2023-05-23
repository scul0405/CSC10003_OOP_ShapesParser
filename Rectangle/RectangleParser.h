#pragma once
#include "pch.h"
#include "Rectangle.h"

extern "C" {
	/// <summary>
	/// Lớp RectangleParser kế thừa từ interface IParser thực hiện việc phân tích hình chữ nhật
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


