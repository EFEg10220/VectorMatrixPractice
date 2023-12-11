#include "Vector.h"

Vector::Vector(){

}

Vector::~Vector(){

}

void Vector::initArray(){
	srand ( time( NULL ));
	for (int i = 0; i < n; i++) {
		vector[i] = rand() % 20;
	}
}

void Vector::showArray(){
	for (int i = 0; i < n; i++) {
		cout << vector[i] << " | ";
	}
}

void Vector::orderArray(){
	cout << "\n\nVector ordenado: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (vector[j] > vector[j + 1]) {
				int auxiliar = vector[j];
				vector[j] = vector[j + 1];
				vector[j + 1] = auxiliar;
			}
		}
	}
}
