#include "ShowDataCustom.h"

void ShowDataCustom::showData(vector<SHAPE_DATA> data)
{
	for (int i = 0; i < data.size(); i++) {
		wcout << left
			<< to_wstring(i + 1) + L". ";

		const auto& [shapeName, shapeInfor, perimeter, area] = data[i];
		wstringstream builder;

		builder << shapeInfor << ": " << shapeName;

		wcout << builder.str() << endl;
	}
}