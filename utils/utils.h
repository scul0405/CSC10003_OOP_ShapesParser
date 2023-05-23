#pragma once

#include "pch.h"
#include "framework.h"

#include <iostream>
#include <string>
#include <sstream>
#include <regex>
#include <vector>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <map>
#include <tuple>
#include <io.h>
#include <filesystem>
#include <fcntl.h>
#include <exception>
#include <memory>
#include <algorithm>
#include <cmath>

using std::cout, std::cin, std::endl;
using std::string, std::stringstream, std::wstring, std::wstringstream;
using std::wcout;
using std::vector;
using std::fstream;
using std::map, std::tuple;
using std::ifstream, std::ofstream;
using std::setw, std::fixed, std::setprecision, std::left;
using std::regex, std::regex_match;
using std::exception;
using std::to_wstring;
using std::sort;
using std::unique_ptr, std::shared_ptr, std::make_unique, std::make_shared;

/// <summary>
/// SHAPE_DATA là một tập dữ liệu lưu trữ 4 trường:
///		- Tên hình
///		- Thông tin của hình
///		- Chu vi hình
///		- Diện tích hình
/// </summary>
typedef tuple<wstring, wstring, wstring, wstring> SHAPE_DATA;

const double PI = 3.1415;

/// <summary> 
///		DOUBLE_PATTERN dùng để kiểm tra một số có phải là số thực không
/// </summary>
const regex DOUBLE_PATTERN("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");