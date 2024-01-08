#include "VectorOperation.h"

VectorOperation::VectorOperation(){
    for (int i = 0; i < NUMBERS; i++) {
             vector[i] = 0;
        }
}

VectorOperation::~VectorOperation(){

}

void VectorOperation::initVector(){
	for (int i = 0; i < NUMBERS; i++) {
		cout << "Escriba un numero: "; cin >> vector[i];
	}
}

void VectorOperation::showVector(){
	cout << "\nVector original: " << endl;
	for (int i = 0; i < NUMBERS; i++) {
		cout << vector[i] << "\t";
	}
}

void VectorOperation::bubbleSortPass() {
    for (int j = 0; j < NUMBERS - 1; j++) {
        if (vector[j] > vector[j + 1]) {
            swap(vector[j], vector[j + 1]);
        }
    }
}

void VectorOperation::showSortVector() {
    for (int i = 0; i < NUMBERS - 1; i++) {
        bubbleSortPass();
    }

    cout << "\nVector ordenado ascendentemente: " << endl;
    for (int i = 0; i < NUMBERS; i++) {
        cout << vector[i] << "\t";
    }
}

void VectorOperation::runCode(){
	initVector();
	showVector();
    showSortVector();
}