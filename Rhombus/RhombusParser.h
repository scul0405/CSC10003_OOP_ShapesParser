#pragma once

#include "pch.h"
#include "Rhombus.h"

extern "C" {
    /**
     * @brief RhombusParser class, which inherits from the IParser interface and performs the task of parsing rhombus shapes
     */
    class RhombusParser :
        public IParser
    {
    private:
        /// Singleton instance of RhombusParser
        inline static RhombusParser* _instance = nullptr;

        /**
         * @brief Private constructor for RhombusParser class
         */
        RhombusParser() = default;

        /**
         * @brief Private destructor for RhombusParser class
         */
        ~RhombusParser() = default;

        /**
         * @brief Private copy constructor for RhombusParser class
         */
        RhombusParser(const RhombusParser&) = delete;

        /**
         * @brief Private copy assignment operator for RhombusParser class
         */
        RhombusParser& operator=(const RhombusParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of RhombusParser
         * @returns Singleton instance of RhombusParser
         */
        static RhombusParser* getInstance();

        /**
         * @brief Parses the input data and returns a Rhombus object
         * @param Input data to parse
         * @returns Rhombus object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the RhombusParser object
         * @returns String representation of the RhombusParser object
         */
        string toString() override;
    };
}