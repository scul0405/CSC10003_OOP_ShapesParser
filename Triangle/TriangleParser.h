#pragma once

#include "pch.h"
#include "Triangle.h"

extern "C" {
    /**
     * @brief TriangleParser class, which inherits from the IParser interface and performs the task of parsing triangle shapes
     */
    class TriangleParser :
        public IParser
    {
    private:
        /// Singleton instance of TriangleParser
        inline static TriangleParser* _instance = nullptr;

        /**
         * @brief Private constructor for TriangleParser class
         */
        TriangleParser() = default;

        /**
         * @brief Private destructor for TriangleParser class
         */
        ~TriangleParser() = default;

        /**
         * @brief Private copy constructor for TriangleParser class
         */
        TriangleParser(const TriangleParser&) = delete;

        /**
         * @brief Private copy assignment operator for TriangleParser class
         */
        TriangleParser& operator=(const TriangleParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of TriangleParser
         * @returns Singleton instance of TriangleParser
         */
        static TriangleParser* getInstance();

        /**
         * @brief Parses the input data and returns a Triangle object
         * @param Input data to parse
         * @returns Triangle object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the TriangleParser object
         * @returns String representation of the TriangleParser object
         */
        string toString() override;
    };
}