#pragma once
#include "pch.h"
#include "Ellipse.h"

extern "C" {
    /**
     * @brief EllipseParser class, which inherits from the IParser interface and performs the task of parsing ellipse shapes
     */
    class EllipseParser :
        public IParser
    {
    private:
        /// Singleton instance of EllipseParser
        inline static EllipseParser* _instance = nullptr;

        /**
         * @brief Private constructor for EllipseParser class
         */
        EllipseParser() = default;

        /**
         * @brief Private destructor for EllipseParser class
         */
        ~EllipseParser() = default;

        /**
         * @brief Private copy constructor for EllipseParser class
         */
        EllipseParser(const EllipseParser&) = delete;

        /**
         * @brief Private copy assignment operator for EllipseParser class
         */
        EllipseParser& operator=(const EllipseParser&) = delete;
    public:
        /**
         * @brief Gets the singleton instance of EllipseParser
         * @returns Singleton instance of EllipseParser
         */
        static EllipseParser* getInstance();

        /**
         * @brief Parses the input data and returns an Ellipse object
         * @param Input data to parse
         * @returns Ellipse object parsed from the input data
         * @throws std::exception if unable to parse the input data
         */
        IShape* parse(stringstream data) noexcept(false) override;

        /**
         * @brief Returns a string representation of the EllipseParser object
         * @returns String representation of the EllipseParser object
         */
        string toString() override;
    };
}


