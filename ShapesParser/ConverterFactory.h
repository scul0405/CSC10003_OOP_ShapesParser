#pragma once
#include "IShape.h"
#include "IShapeToStringConverter.h"
#include "../utils/utils.h"
#include "Object.h"

/**
 * @brief Class to manage a list of prototypes for IShapeToStringConverter objects.
 */
class ConverterFactory : public Object
{
    map<string, IShapeToStringConverter*> _prototypes;
public:
    /**
     * @brief Register a new prototype with the factory.
     *
     * @param type The name of the type of the prototype being registered.
     * @param parser A pointer to the prototype object.
     */
    void registerWith(string type, IShapeToStringConverter* parser);

    /**
     * @brief Select a prototype from the factory based on its type.
     *
     * @param type The name of the type of the prototype being selected.
     * @return A pointer to the selected prototype object. If no prototype is found with the given type, returns null.
     */
    IShapeToStringConverter* select(string type);

    /**
     * @brief Return a string representation of the list of prototypes registered with the factory.
     *
     * @return A string describing the list of prototypes registered with the factory.
     */
    string toString() override;
};


