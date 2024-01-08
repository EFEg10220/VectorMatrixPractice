#include "VectorOperation.h"

VectorOperation::VectorOperation(){

}

VectorOperation::~VectorOperation(){

}

bool VectorOperation::checkNumber(int number) {
	for (int i = 3; i * i <= number; i += 2) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

bool VectorOperation::isPrimeNumber(int position) {
	bool isANumberOne = position <= 1;
	bool isANumberTwo = position == 2;
	bool isAEvenNumber = position % 2 == 0;

	if (isANumberTwo) {
		return true;
	}

	if (isAEvenNumber || isANumberOne) {
		return false;
	}

	return checkNumber(position);
}

void VectorOperation::ascendingPrimeNumbers() {

	for (int position = 0; position < ARRAY_SIZE; position++) {
		array[position] = position + 1;
		if (isPrimeNumber(array[position])) {
			cout << array[position] << " ";
		}
	}
}