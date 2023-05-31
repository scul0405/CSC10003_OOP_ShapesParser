#pragma once

#include "pch.h"

extern "C" {
    namespace myTriangle {
        /**
         * @brief Triangle class, which inherits from the IShape interface and stores information about a triangle shape
         */
        class Triangle :
            public IShape
        {
            /// The length of the first edge of the triangle
            double _firstEdge;

            /// The length of the second edge of the triangle
            double _secondEdge;

            /// The length of the third edge of the triangle
            double _thirdEdge;

        public:
            /**
             * @brief Constructor for Triangle class
             * @param Length of the first edge of the triangle
             * @param Length of the second edge of the triangle
             * @param Length of the third edge of the triangle
             */
            Triangle(double, double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the triangle
             * @returns Area of the triangle
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the triangle
             * @returns Perimeter of the triangle
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Triangle object
             * @returns String representation of the Triangle object
             */
            string toString() override;

            /**
             * @brief Gets the length of the first edge of the triangle
             * @returns Length of the first edge of the triangle
             */
            double firstEdge();

            /**
             * @brief Gets the length of the second edge of the triangle
             * @returns Length of the second edge of the triangle
             */
            double secondEdge();

            /**
             * @brief Gets the length of the third edge of the triangle
             * @returns Length of the third edge of the triangle
             */
            double thirdEdge();
        };
    };
}