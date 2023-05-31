#pragma once

#include "pch.h"
#include "IsoscelesTrapezoid.h"

extern "C" {
    /**
     * @brief IsoscelesTrapezoidParser class, which inherits from the IParser interface and performs the task of parsing isosceles trapezoid shapes
     */
    class IsoscelesTrapezoidParser :
        public IParser
    {
    private:
        /// Singleton instance of IsoscelesTrapezoidParser
        inline static IsoscelesTrapezoidParser* _instance = nullptr;

        /**
         * @brief Private constructor for IsoscelesTrapezoidParser class
         */
        IsoscelesTrapezoidParser() = default;

        /**
         * @brief Private destructor for IsoscelesTrapezoidParser class
         */
        ~IsoscelesTrapezoidParser() = default;

        /**
         * @brief Private copy constructor for IsoscelesTrapezoidParser class
         */
        IsoscelesTrapezoidParser(const IsoscelesTrapezoidParser&) = delete;

        /**
         * @brief Private copy assignment operator for IsoscelesTrapezoidParser class
         */
        IsoscelesTrapezoidParser& operator=(const IsoscelesTrapezoidParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of IsoscelesTrapezoidParser
         * @returns Singleton instance of IsoscelesTrapezoidParser
         */
        static IsoscelesTrapezoidParser* getInstance();

        /**
         * @brief Parses the input data and returns an IsoscelesTrapezoid object
         * @param Input data to parse
         * @returns IsoscelesTrapezoid object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the IsoscelesTrapezoidParser object
         * @returns String representation of the IsoscelesTrapezoidParser object
         */
        string toString() override;
    };
}