#pragma once

#include "pch.h"

extern "C" {
    namespace mySquare {
        /**
         * @brief Square class, which inherits from the IShape interface and stores information about a square shape
         */
        class Square :
            public IShape
        {
            /// The length of the sides of the square
            double _length;

        public:
            /**
             * @brief Constructor for Square class
             * @param Length of the sides of the square
             */
            Square(double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the square
             * @returns Area of the square
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the square
             * @returns Perimeter of the square
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Square object
             * @returns String representation of the Square object
             */
            std::string toString() override;

            /**
             * @brief Gets the length of the sides of the square
             * @returns Length of the sides of the square
             */
            double length();
        };
    };
}