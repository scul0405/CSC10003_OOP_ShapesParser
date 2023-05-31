#pragma once

#include "pch.h"
#include "Square.h"

extern "C" {
	/**
	 * @brief SquareToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting square shape information to data set
	 */
	class SquareToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Square object to SHAPE_DATA format
		 * @param Pointer to the Square object to be converted
		 * @returns SHAPE_DATA formatted version of the Square object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the SquareToStringConverter object
		 * @returns String representation of the SquareToStringConverter object
		 */
		string toString() override;
	};
}