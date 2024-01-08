#pragma once
#include <iostream>

using namespace std;

class VectorOperation {
private:
	static const int NUMBERS = 10;
	int vector[NUMBERS];

public:
	VectorOperation();
	~VectorOperation();

	void initVector();
	void showVector();
	void bubbleSortPass();
	void showSortVector();
	void runCode();

};