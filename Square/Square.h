#pragma once
#include "pch.h"

// Lớp Square nằm trong namespace mySquare
// cái extern C là chuẩn viết dll của nó
extern "C" {
    namespace mySquare {
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


