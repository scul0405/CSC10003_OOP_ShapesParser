// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Parallelogram.h"
#include "ParallelogramToStringConverter.h"
#include "ParallelogramParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = ParallelogramParser::getInstance();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new ParallelogramToStringConverter();
		return result;
	}
}

