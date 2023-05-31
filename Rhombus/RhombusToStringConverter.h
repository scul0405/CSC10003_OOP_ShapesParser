#pragma once

#include "pch.h"
#include "Rhombus.h"

extern "C" {
	/**
	 * @brief RhombusToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting rhombus shape information to data set
	 */
	class RhombusToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Rhombus object to SHAPE_DATA format
		 * @param Pointer to the Rhombus object to be converted
		 * @returns SHAPE_DATA formatted version of the Rhombus object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the RhombusToStringConverter object
		 * @returns String representation of the RhombusToStringConverter object
		 */
		string toString() override;
	};
}