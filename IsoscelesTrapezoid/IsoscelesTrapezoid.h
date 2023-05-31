#pragma once

#include "pch.h"

extern "C" {
    namespace myIsoscelesTrapezoid {
        /**
         * @brief IsoscelesTrapezoid class, which inherits from the IShape interface and stores information about an isosceles trapezoid shape
         */
        class IsoscelesTrapezoid :
            public IShape
        {
            /// The length of the top base of the isosceles trapezoid
            double _top;

            /// The length of the bottom base of the isosceles trapezoid
            double _base;

            /// The height of the isosceles trapezoid
            double _height;

        public:
            /**
             * @brief Constructor for IsoscelesTrapezoid class
             * @param Length of the top base of the isosceles trapezoid
             * @param Length of the bottom base of the isosceles trapezoid
             * @param Height of the isosceles trapezoid
             */
            IsoscelesTrapezoid(double, double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the isosceles trapezoid
             * @returns Area of the isosceles trapezoid
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the isosceles trapezoid
             * @returns Perimeter of the isosceles trapezoid
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the IsoscelesTrapezoid object
             * @returns String representation of the IsoscelesTrapezoid object
             */
            string toString() override;

            /**
             * @brief Gets the length of the top base of the isosceles trapezoid
             * @returns Length of the top base of the isosceles trapezoid
             */
            double top();

            /**
             * @brief Gets the length of the bottom base of the isosceles trapezoid
             * @returns Length of the bottom base of the isosceles trapezoid
             */
            double base();

            /**
             * @brief Gets the height of the isosceles trapezoid
             * @returns Height of the isosceles trapezoid
             */
            double height();
        };
    };
}