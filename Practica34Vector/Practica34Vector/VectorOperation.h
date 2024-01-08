#pragma once
#include <iostream>

using namespace std;

class VectorOperation {
private:
	static const int ARRAY_SIZE = 100;
	int array[ARRAY_SIZE];

public:

	VectorOperation();
	~VectorOperation();

	bool checkNumber(int number);
	bool isPrimeNumber(int position);
	void ascendingPrimeNumbers();
};