#pragma once
#include "pch.h"

extern "C" {
    namespace myCircle {
        /**
         * @brief Circle class, which inherits from the IShape interface and stores information about a circle shape
         */
        class Circle :
            public IShape
        {
            /// The length of the radius of the circle
            double _radius;
        public:
            /**
             * @brief Constructor for Circle class
             * @param Length of the radius of the circle
             */
            Circle(double R) noexcept(false);

            /**
             * @brief Calculates and returns the area of the circle
             * @returns Area of the circle
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the circle
             * @returns Perimeter of the circle
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Circle object
             * @returns String representation of the Circle object
             */
            string toString() override;

            /**
             * @brief Gets the length of the radius of the circle
             * @returns Length of the radius of the circle
             */
            double radius();
        };
    }
}

