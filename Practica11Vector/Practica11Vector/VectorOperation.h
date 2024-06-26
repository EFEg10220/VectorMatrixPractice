#pragma once
#include <iostream>

using namespace std;

class VectorOperation {
private:
	string months[12];
	int days[12];

public:
	VectorOperation();
	~VectorOperation();

	string getMonthName(int monthNumber);
	int getMonthDay(int monthNumber);

};