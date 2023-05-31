#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
	/**
	 * @brief EllipseToStringConverter class, which inherits from the IShapeToStringConverter interface and performs the task of converting ellipse shape information to data set
	 */
	class EllipseToStringConverter :
		public IShapeToStringConverter
	{
	public:
		/**
		 * @brief Converts an Ellipse object to SHAPE_DATA format
		 * @param Pointer to the Ellipse object to be converted
		 * @returns SHAPE_DATA formatted version of the Ellipse object
		 */
		SHAPE_DATA convert(IShape*) override;

		/**
		 * @brief Returns a string representation of the EllipseToStringConverter object
		 * @returns String representation of the EllipseToStringConverter object
		 */
		string toString() override;
	};
}

