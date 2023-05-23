// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Rhombus.h"
#include "RhombusToStringConverter.h"
#include "RhombusParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = RhombusParser::getInstance();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new RhombusToStringConverter();
		return result;
	}
}

