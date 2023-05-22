#pragma once
#include "pch.h"
#include "Square.h"

extern "C" {
    class SquareParser :
        public IParser
    {
    public:
        IShape* parse(stringstream data) noexcept(false) override;
    };
}

