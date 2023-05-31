#include "ShowTableDefault.h"

void ShowTableDefault::showTable(vector<SHAPE_DATA> data)
{
	for (int i = 0; i < data.size(); i++)
	{
		wcout << left << "| " << setw(3)
			  << to_wstring(i + 1);

		const auto &[shapeName, shapeInfor, perimeter, area] = data[i];
		wstringstream builder;

		// cột tên
		builder << " | ";
		builder.fill(' ');
		builder << left << setw(15) << shapeName;

		// cột thông tin
		builder << " | ";
		builder.fill(' ');
		builder << left << setw(45) << shapeInfor;

		// cột chu vi
		builder << " | ";
		builder.fill(' ');
		builder << left << setw(18) << perimeter;

		// cột diện tích
		builder << " | ";
		builder.fill(' ');
		builder << left << setw(18) << area;
		builder << " |";

		wcout << builder.str() << endl;
	}
}

string ShowTableDefault::toString()
{
	return "ShowTableDefault";
}
