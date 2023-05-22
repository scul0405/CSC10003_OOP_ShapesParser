#pragma once
#include "pch.h"
#include "Circle.h"

extern "C" {
    class CircleParser :
        public IParser
    {
    public:
        IShape* parse(std::stringstream data) noexcept(false) override;
    };
}

