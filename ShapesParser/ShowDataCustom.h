#pragma once

#include "IShowDataBehavior.h"
#include "../utils/utils.h"

/**
 * @brief Custom implementation of IShowDataBehavior, responsible for displaying shape data in a customized format
 */
class ShowDataCustom : public IShowDataBehavior
{
public:
    /**
     * @brief Displays shape data in a customized format
     * @param Vector containing shape data to be displayed
     */
    void showData(vector<SHAPE_DATA>);

    /**
     * @brief Returns a string representation of the ShowDataCustom object
     * @returns String representation of the ShowDataCustom object
     */
    string toString() override;
};

