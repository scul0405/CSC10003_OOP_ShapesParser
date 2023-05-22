// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "IsoscelesTrapezoid.h"
#include "IsoscelesTrapezoidToStringConverter.h"
#include "IsoscelesTrapezoidParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = new IsoscelesTrapezoidParser();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new IsoscelesTrapezoidToStringConverter();
		return result;
	}
}

