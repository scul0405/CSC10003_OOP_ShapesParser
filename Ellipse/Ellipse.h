#pragma once
#include "pch.h"

extern "C" {
    namespace myEllipse {
        /**
         * @brief Ellipse class, which inherits from the IShape interface and stores information about an ellipse shape
         */
        class Ellipse :
            public IShape
        {
            /// The semi-minor axis of the ellipse
            double _semi_minor_axis;

            /// The semi-major axis of the ellipse
            double _semi_major_axis;
        public:
            /**
             * @brief Constructor for Ellipse class
             * @param Semi-minor axis of the ellipse
             * @param Semi-major axis of the ellipse
             */
            Ellipse(double, double) noexcept(false);

            /**
             * @brief Calculates and returns the area of the ellipse
             * @returns Area of the ellipse
             */
            double area() override;

            /**
             * @brief Calculates and returns the perimeter of the ellipse
             * @returns Perimeter of the ellipse
             */
            double perimeter() override;

            /**
             * @brief Returns a string representation of the Ellipse object
             * @returns String representation of the Ellipse object
             */
            string toString() override;

            /**
             * @brief Gets the semi-minor axis of the ellipse
             * @returns Semi-minor axis of the ellipse
             */
            double semi_minor_axis();

            /**
             * @brief Gets the semi-major axis of the ellipse
             * @returns Semi-major axis of the ellipse
             */
            double semi_major_axis();
        };
    };
}

