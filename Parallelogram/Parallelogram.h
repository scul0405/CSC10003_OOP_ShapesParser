#pragma once

#include "pch.h"

extern "C" {
    namespace myParallelogram {
        /**
         * @brief Parallelogram class, which inherits from the IShape interface and stores information about a parallelogram shape
         */
        class Parallelogram :
            public IShape
        {
            /// The length of one of the sides of the parallelogram
            double _side;

            /// The length of the base of the parallelogram
            double _base;

            /// The height of the parallelogram
            double _height;

        public:
            /**
             * @brief Constructor for Parallelogram class
             * @param Length of one of the sides of the parallelogram
             * @param Length of the base of the parallelogram
             * @param Height of the parallelogram
             */
            Parallelogram(double, double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the parallelogram
             * @returns Area of the parallelogram
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the parallelogram
             * @returns Perimeter of the parallelogram
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Parallelogram object
             * @returns String representation of the Parallelogram object
             */
            string toString() override;

            /**
             * @brief Gets the length of one of the sides of the parallelogram
             * @returns Length of one of the sides of the parallelogram
             */
            double side();

            /**
             * @brief Gets the length of the base of the parallelogram
             * @returns Length of the base of the parallelogram
             */
            double base();

            /**
             * @brief Gets the height of the parallelogram
             * @returns Height of the parallelogram
             */
            double height();
        };
    };
}