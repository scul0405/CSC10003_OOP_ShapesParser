#pragma once
#include "IShowTableBehavior.h"
#include "../utils/utils.h"


#include "IShowTableBehavior.h"

/**
 * @brief Default implementation of IShowTableBehavior, responsible for displaying shape data in a default table format
 */
class ShowTableDefault : public IShowTableBehavior
{
public:
    /**
     * @brief Displays shape data in a default table format
     * @param Vector containing shape data to be displayed
     */
    void showTable(vector<SHAPE_DATA>);

    /**
     * @brief Returns a string representation of the ShowTableDefault object
     * @returns String representation of the ShowTableDefault object
     */
    string toString() override;
};

