// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Trapezoid.h"
#include "TrapezoidToStringConverter.h"
#include "TrapezoidParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = new TrapezoidParser();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new TrapezoidToStringConverter();
		return result;
	}
}

