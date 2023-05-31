#pragma once

#include "../utils/utils.h"
#include "../ShapesParser/IShape.h"
#include "IShowTableBehavior.h"
#include "IShowDataBehavior.h"
#include "ShowTableDefault.h"
#include "ShowDataDefault.h"
#include "Object.h"

 /**
  * @brief ShapesPrinter class, responsible for printing shapes to the screen
  */
class ShapesPrinter : public Object
{
private:
	/// Vector storing information of the shapes
	vector<SHAPE_DATA> _data;

	/// Outputs in table format
	IShowTableBehavior* _showTableBehavior;

	/// Outputs in data format
	IShowDataBehavior* _showDataBehavior;
public:
	/**
	 * @brief Default constructor for ShapesPrinter class
	 */
	ShapesPrinter();

	/**
	 * @brief Sets the behavior for showing data
	 * @param The show data behavior
	 */
	void setShowDataBehavior(IShowDataBehavior*);

	/**
	 * @brief Formats the way data is displayed
	 * @param Vector containing shape data
	 */
	void performShowDataBehavior(vector<SHAPE_DATA>);

	/**
	 * @brief Sets the behavior for showing tables
	 * @param The show table behavior
	 */
	void setShowTableBehavior(IShowTableBehavior*);

	/**
	 * @brief Formats the way tables are displayed
	 * @param Vector containing shape data
	 */
	void performShowTableBehavior(vector<SHAPE_DATA>);

	/**
	 * @brief Adds a shape object to the vector
	 * @param Shape data
	 */
	void push(SHAPE_DATA);

	/**
	 * @brief Clears all shape objects from the vector
	 * @param Shape data
	 */
	void clear();

	/**
	 * @brief Gets all the shape objects that have been added
	 * @returns Vector containing all shape data
	 */
	vector<SHAPE_DATA> getData();

	/**
	 * @brief Returns a string representation of the ShapesPrinter object
	 * @returns String representation of the ShapesPrinter object
	 */
	string toString() override;
};
