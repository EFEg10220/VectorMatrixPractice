#include "VectorOperation.h"

VectorOperation::VectorOperation(){
	SIZE_ARRAY = 0;
	vector = nullptr;
}

VectorOperation::~VectorOperation(){
	delete[] vector;
}

void VectorOperation::initVector(){
	cout << "Escriba la cantidad de elementos: ";cin >> SIZE_ARRAY;
	vector = new int[SIZE_ARRAY];

	for (int i = 0; i < SIZE_ARRAY; i++) {
		cout << "Escriba un numero: "; cin >> vector[i];
	}
}

void VectorOperation::showVector(){
	cout << "\nVector: " << endl;
	for (int i = 0; i < SIZE_ARRAY; i++) {
		cout << vector[i] << "\t";
	}
}

void VectorOperation::findMaximun(){
	int maximun = vector[0];
	for (int i = 0; i < SIZE_ARRAY; i++) {
		if (vector[i] > maximun) {
			maximun = vector[i];
		}
	}

	bool isSecondMaximun = maximun == vector[0];

	if (isSecondMaximun) {
		cout << "No hay segundo mayor" << endl;
	} else {
		findSecondMaximun(maximun);
	}
}

void VectorOperation::findSecondMaximun(int max) {
	int secondMax = vector[0];

	for (int i = 1; i < SIZE_ARRAY; i++) {
		bool isMaximun = vector[i] > secondMax;
		bool isDifferent = vector[i] != max;

		if (isMaximun && isDifferent) {
			secondMax = vector[i];
		}
	}

	cout << "\n\nEl mayor es: " << max << endl;
	cout << "El segundo mayor es: " << secondMax << endl;
}

void VectorOperation::runCode() {
	initVector();
	showVector();
	findMaximun();
}