#pragma once

#include "IShowDataBehavior.h"
#include "../utils/utils.h"

/**
 * @brief Default implementation of IShowDataBehavior, responsible for displaying shape data in a default format
 */
class ShowDataDefault : public IShowDataBehavior
{
public:
    /**
     * @brief Displays shape data in a default format
     * @param Vector containing shape data to be displayed
     */
    void showData(vector<SHAPE_DATA>);

    /**
     * @brief Returns a string representation of the ShowDataDefault object
     * @returns String representation of the ShowDataDefault object
     */
    string toString() override;
};

