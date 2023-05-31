#pragma once

#include "IShowTableBehavior.h"
#include "../utils/utils.h"

/**
 * @brief Custom implementation of IShowTableBehavior, responsible for displaying shape data in a customized table format
 */
class ShowTableCustom : public IShowTableBehavior
{
public:
    /**
     * @brief Displays shape data in a customized table format
     * @param Vector containing shape data to be displayed
     */
    void showTable(vector<SHAPE_DATA>);

    /**
     * @brief Returns a string representation of the ShowTableCustom object
     * @returns String representation of the ShowTableCustom object
     */
    string toString() override;
};

