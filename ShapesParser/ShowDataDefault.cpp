#include "ShowDataDefault.h"

void ShowDataDefault::showData(vector<SHAPE_DATA> data)
{
	for (int i = 0; i < data.size(); i++) {
		wcout << left
			<< to_wstring(i + 1) + L". ";

		const auto& [shapeName, shapeInfor, perimeter, area] = data[i];
		wstringstream builder;

		builder << shapeName << ": " << shapeInfor;

		wcout << builder.str() << endl;
	}
}

string ShowDataDefault::toString()
{
	return "ShowDataDefault";
}
