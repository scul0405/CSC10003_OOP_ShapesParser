#pragma once

#include "pch.h"

extern "C" {
    namespace myRectangle {
        /**
         * @brief Rectangle class, which inherits from the IShape interface and stores information about a rectangle shape
         */
        class Rectangle :
            public IShape
        {
            /// The width of the rectangle
            double _width;

            /// The height of the rectangle
            double _height;

        public:
            /**
             * @brief Constructor for Rectangle class
             * @param Width of the rectangle
             * @param Height of the rectangle
             */
            Rectangle(double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the rectangle
             * @returns Area of the rectangle
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the rectangle
             * @returns Perimeter of the rectangle
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Rectangle object
             * @returns String representation of the Rectangle object
             */
            string toString() override;

            /**
             * @brief Gets the width of the rectangle
             * @returns Width of the rectangle
             */
            double width();

            /**
             * @brief Gets the height of the rectangle
             * @returns Height of the rectangle
             */
            double height();
        };
    };
}