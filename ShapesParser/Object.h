#pragma once
#include "../utils/utils.h"

/// <summary>
/// Lớp giao diện lớn nhất, là lớp cha của toàn bộ các lớp trong chương trình
/// </summary>
class Object
{
public:
	/// <summary>
	/// Hàm trả về chuỗi biểu diễn cho đối tượng
	/// </summary>
	/// <returns></returns>
	virtual string toString() = 0;
};