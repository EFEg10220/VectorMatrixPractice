#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Vector {
private:
	static const int n = 15;
	int vector[n];
public:
	Vector();
	~Vector();
	void initArray();
	void showArray();
	void orderArray();
};