#pragma once

#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
	/**
	 * @brief IsoscelesTrapezoidToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting isosceles trapezoid shape information to data set
	 */
	class IsoscelesTrapezoidToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts an IsoscelesTrapezoid object to SHAPE_DATA format
		 * @param Pointer to the IsoscelesTrapezoid object to be converted
		 * @returns SHAPE_DATA formatted version of the IsoscelesTrapezoid object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the IsoscelesTrapezoidToStringConverter object
		 * @returns String representation of the IsoscelesTrapezoidToStringConverter object
		 */
		string toString() override;
	};
}