#pragma once

#include "pch.h"
#include "Triangle.h"

extern "C" {
	/**
	 * @brief TriangleToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting triangle shape information to data set
	 */
	class TriangleToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Triangle object to SHAPE_DATA format
		 * @param Pointer to the Triangle object to be converted
		 * @returns SHAPE_DATA formatted version of the Triangle object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the TriangleToStringConverter object
		 * @returns String representation of the TriangleToStringConverter object
		 */
		string toString() override;
	};
}