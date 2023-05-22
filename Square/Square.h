#pragma once
#include "pch.h"

// Lớp Square nằm trong namespace mySquare
// cái extern C là chuẩn viết dll của nó
extern "C" {
    namespace mySquare {
        class Square :
            public IShape
        {
            float _length;
        public:
            Square(float) noexcept(false);
            float area() override;
            float perimeter() override;
            std::string toString() override;
            float length();
        };
    };
}


