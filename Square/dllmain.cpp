// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Square.h"
#include "SquareToStringConverter.h"
#include "SquareParser.h"

// Hai hàm dùng để lấy ra các đối tượng tương ứng của từng file dll
extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = SquareParser::getInstance();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new SquareToStringConverter();
		return result;
	}
}

