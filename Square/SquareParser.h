#pragma once

#include "pch.h"
#include "Square.h"

extern "C" {
    /**
     * @brief SquareParser class, which inherits from the IParser interface and performs the task of parsing square shapes
     */
    class SquareParser :
        public IParser
    {
    private:
        /// Singleton instance of SquareParser
        inline static SquareParser* _instance = nullptr;

        /**
         * @brief Private constructor for SquareParser class
         */
        SquareParser() = default;

        /**
         * @brief Private destructor for SquareParser class
         */
        ~SquareParser() = default;

        /**
         * @brief Private copy constructor for SquareParser class
         */
        SquareParser(const SquareParser&) = delete;

        /**
         * @brief Private copy assignment operator for SquareParser class
         */
        SquareParser& operator=(const SquareParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of SquareParser
         * @returns Singleton instance of SquareParser
         */
        static SquareParser* getInstance();

        /**
         * @brief Parses the input data and returns a Square object
         * @param Input data to parse
         * @returns Square object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the SquareParser object
         * @returns String representation of the SquareParser object
         */
        string toString() override;
    };
}