#pragma once
#include <iostream>

using namespace std;

class VectorOperation {
private:
	int SIZE_ARRAY;
	int* vector;

public:
	VectorOperation();
	~VectorOperation();

	void initVector();
	void showVector();
	void findMaximun();
	void findSecondMaximun(int max);
	void runCode();

};