#pragma once

#include "pch.h"
#include "Parallelogram.h"

extern "C" {
	/**
	 * @brief ParallelogramToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting parallelogram shape information to data set
	 */
	class ParallelogramToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts a Parallelogram object to SHAPE_DATA format
		 * @param Pointer to the Parallelogram object to be converted
		 * @returns SHAPE_DATA formatted version of the Parallelogram object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the ParallelogramToStringConverter object
		 * @returns String representation of the ParallelogramToStringConverter object
		 */
		string toString() override;
	};
}