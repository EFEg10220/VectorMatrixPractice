#include "Vector.h"

Vector::Vector(){

}

Vector::~Vector(){

}

void Vector::initArray(){
	for (int i = 0; i < n; i++) {
		cout << "Escriba un numero: "; cin >> vector[i];
	}
}

void Vector::showArray(){
	for (int i = 0; i < n; i++) {
		if (vector[i] < 0) {
			break;
			cout << vector[i] << " | ";
		}
		cout << vector[i] << " | ";
	}
}
