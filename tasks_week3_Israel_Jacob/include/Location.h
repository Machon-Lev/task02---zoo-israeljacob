#pragma once
#include <iostream>
struct Location
{
	int row;
	int colomn;
public:
	Location();
	Location(int row, int colomn);
	int getRow();
	void setRow(int row);
	int gerColomn();
	void setColomn(int colomn);
	Location operator+=(Location other);
	bool operator==(Location other);
	bool operator!=(Location other);
	std::ostream& operator<<(std::ostream& os);
};