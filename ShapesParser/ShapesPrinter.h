#pragma once
#include "../utils/utils.h"
#include "../ShapesParser/IShape.h"
#include "IShowTableBehavior.h"
#include "IShowDataBehavior.h"
#include "ShowTableDefault.h"
#include "ShowDataDefault.h"

/// <summary>
/// Lớp phụ trách việc in ra màn hình
/// </summary>
class ShapesPrinter
{
	/// <summary>
	/// vector lưu trữ các thông tin của các hình
	/// </summary>
	vector<SHAPE_DATA> _data;

	/// <summary>
	/// Xuất ra màn hình kiểu bảng
	/// </summary>
	IShowTableBehavior* _showTableBehavior;

	/// <summary>
	/// Xuất ra màn hình kiểu dữ liệu
	/// </summary>
	IShowDataBehavior* _showDataBehavior;
public:
	/// <summary>
	/// Hàm tạo đối tượng
	/// </summary>
	ShapesPrinter();

	/// <summary>
	/// Hàm cài đặt kiểu in dạng dữ liệu
	/// </summary>
	/// <param name=""></param>
	void setShowDataBehavior(IShowDataBehavior*);

	/// <summary>
	/// Hàm định dạng cách in dữ liệu
	/// </summary>
	/// <param name=""></param>
	void performShowDataBehavior(vector<SHAPE_DATA>);

	/// <summary>
	/// Hàm cài đặt kiểu in dạng bảng
	/// </summary>
	/// <param name=""></param>
	void setShowTableBehavior(IShowTableBehavior*);

	/// <summary>
	/// Hàm định dạng cách in bảng
	/// </summary>
	/// <param name=""></param>
	void performShowTableBehavior(vector<SHAPE_DATA>);

	/// <summary>
	/// Hàm thêm vào một đối tượng hình
	/// </summary>
	/// <param name=""></param>
	void push(SHAPE_DATA);

	/// <summary>
	/// Hàm xóa các đối tượng
	/// </summary>
	/// <param name=""></param>
	void clear(SHAPE_DATA);

	/// <summary>
	/// Hàm lấy các đối tượng hình đã được thêm váo
	/// </summary>
	/// <returns></returns>
	vector<SHAPE_DATA> getData();
};

