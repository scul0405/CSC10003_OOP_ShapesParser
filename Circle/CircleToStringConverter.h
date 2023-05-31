#pragma once

#include "pch.h"
#include "Circle.h"

extern "C" {
	/**
	 * @brief CircleToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting circle shape information to data set
	 */
	class CircleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Circle object to SHAPE_DATA format
		 * @param Pointer to the Circle object to be converted
		 * @returns SHAPE_DATA formatted version of the Circle object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the CircleToStringConverter object
		 * @returns String representation of the CircleToStringConverter object
		 */
		string toString() override;
	};
}