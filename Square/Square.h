#pragma once
#include "pch.h"

extern "C" {
    namespace mySquare {
        /// <summary>
        /// Class Square inherits from interface IShape and save information about a square
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


