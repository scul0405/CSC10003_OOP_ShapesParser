// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Circle.h"
#include "CircleToStringConverter.h"
#include "CircleParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = new CircleParser();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new CircleToStringConverter();
		return result;
	}
}

