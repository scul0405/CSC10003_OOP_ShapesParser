#pragma once

#include "pch.h"
#include "Rectangle.h"

extern "C" {
	/**
	 * @brief RectangleToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting rectangle shape information to data set
	 */
	class RectangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Rectangle object to SHAPE_DATA format
		 * @param Pointer to the Rectangle object to be converted
		 * @returns SHAPE_DATA formatted version of the Rectangle object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the RectangleToStringConverter object
		 * @returns String representation of the RectangleToStringConverter object
		 */
		string toString() override;
	};
}