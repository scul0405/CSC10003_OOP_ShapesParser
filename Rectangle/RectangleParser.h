#pragma once

#include "pch.h"
#include "Rectangle.h"

extern "C" {
    /**
     * @brief RectangleParser class, which inherits from the IParser interface and performs the task of parsing rectangle shapes
     */
    class RectangleParser :
        public IParser
    {
    private:
        /// Singleton instance of RectangleParser
        inline static RectangleParser* _instance = nullptr;

        /**
         * @brief Private constructor for RectangleParser class
         */
        RectangleParser() = default;

        /**
         * @brief Private destructor for RectangleParser class
         */
        ~RectangleParser() = default;

        /**
         * @brief Private copy constructor for RectangleParser class
         */
        RectangleParser(const RectangleParser&) = delete;

        /**
         * @brief Private copy assignment operator for RectangleParser class
         */
        RectangleParser& operator=(const RectangleParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of RectangleParser
         * @returns Singleton instance of RectangleParser
         */
        static RectangleParser* getInstance();

        /**
         * @brief Parses the input data and returns a Rectangle object
         * @param Input data to parse
         * @returns Rectangle object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the RectangleParser object
         * @returns String representation of the RectangleParser object
         */
        string toString() override;
    };
}