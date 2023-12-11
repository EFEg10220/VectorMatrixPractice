#pragma once
#include <iostream>

using namespace std;

class Vector {
private:
	static const int n = 10;
	int vector[n];
public:
	Vector();
	~Vector();
	void initArray();
	void showArray();

};