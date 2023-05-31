#pragma once

#include "pch.h"

extern "C" {
    namespace myRhombus {
        /**
         * @brief Rhombus class, which inherits from the IShape interface and stores information about a rhombus shape
         */
        class Rhombus :
            public IShape
        {
            /// The length of the short diagonal of the rhombus
            double _short_diagonal;

            /// The length of the long diagonal of the rhombus
            double _long_diagonal;

        public:
            /**
             * @brief Constructor for Rhombus class
             * @param Length of the short diagonal of the rhombus
             * @param Length of the long diagonal of the rhombus
             */
            Rhombus(double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the rhombus
             * @returns Area of the rhombus
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the rhombus
             * @returns Perimeter of the rhombus
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Rhombus object
             * @returns String representation of the Rhombus object
             */
            string toString() override;

            /**
             * @brief Gets the length of the short diagonal of the rhombus
             * @returns Length of the short diagonal of the rhombus
             */
            double short_diagonal();

            /**
             * @brief Gets the length of the long diagonal of the rhombus
             * @returns Length of the long diagonal of the rhombus
             */
            double long_diagonal();
        };
    };
}