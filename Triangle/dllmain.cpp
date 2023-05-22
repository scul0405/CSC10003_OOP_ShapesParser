// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <windows.h>
#include <objbase.h>
#include "Triangle.h"
#include "TriangleToStringConverter.h"
#include "TriangleParser.h"

extern "C" {
	__declspec(dllexport) IParser* __stdcall getParserInstance() {
		IParser* result = new TriangleParser();
		return result;
	}

	__declspec(dllexport) IShapeToStringConverter* __stdcall getConverterInstance() {
		IShapeToStringConverter* result = new TriangleToStringConverter();
		return result;
	}
}