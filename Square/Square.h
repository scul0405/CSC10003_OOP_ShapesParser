#pragma once
#include "pch.h"

extern "C" {
    namespace mySquare {
        /// <summary>
        /// Lớp Square kế thừa từ interface IShape lưu thông tin hình vuông
        /// </summary>
        class Square :
            public IShape
        {
            double _length;
        public:
            Square(double) noexcept(false);
            double area() override;
            double perimeter() override;
            std::string toString() override;
            double length();
        };
    };
}


