#pragma once

#include "pch.h"
#include "Circle.h"

extern "C" {
    /**
     * @brief CircleParser class, which inherits from the IParser interface and performs the task of parsing circle shapes
     */
    class CircleParser :
        public IParser
    {
    private:
        /// Singleton instance of CircleParser
        inline static CircleParser* _instance = nullptr;

        /**
         * @brief Private constructor for CircleParser class
         */
        CircleParser() = default;

        /**
         * @brief Private destructor for CircleParser class
         */
        ~CircleParser() = default;

        /**
         * @brief Private copy constructor for CircleParser class
         */
        CircleParser(const CircleParser&) = delete;

        /**
         * @brief Private copy assignment operator for CircleParser class
         */
        CircleParser& operator=(const CircleParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of CircleParser
         * @returns Singleton instance of CircleParser
         */
        static CircleParser* getInstance();

        /**
         * @brief Parses the input data and returns a Circle object
         * @param Input data to parse
         * @returns Circle object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the CircleParser object
         * @returns String representation of the CircleParser object
         */
        string toString() override;
    };
}