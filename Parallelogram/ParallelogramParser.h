#pragma once

#include "pch.h"
#include "Parallelogram.h"

extern "C" {
    /**
     * @brief ParallelogramParser class, which inherits from the IParser interface and performs the task of parsing parallelogram shapes
     */
    class ParallelogramParser :
        public IParser
    {
    private:
        /// Singleton instance of ParallelogramParser
        inline static ParallelogramParser* _instance = nullptr;

        /**
         * @brief Private constructor for ParallelogramParser class
         */
        ParallelogramParser() = default;

        /**
         * @brief Private destructor for ParallelogramParser class
         */
        ~ParallelogramParser() = default;

        /**
         * @brief Private copy constructor for ParallelogramParser class
         */
        ParallelogramParser(const ParallelogramParser&) = delete;

        /**
         * @brief Private copy assignment operator for ParallelogramParser class
         */
        ParallelogramParser& operator=(const ParallelogramParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of ParallelogramParser
         * @returns Singleton instance of ParallelogramParser
         */
        static ParallelogramParser* getInstance();

        /**
         * @brief Parses the input data and returns a Parallelogram object
         * @param Input data to parse
         * @returns Parallelogram object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the ParallelogramParser object
         * @returns String representation of the ParallelogramParser object
         */
        string toString() override;
    };
}