#include <iostream>
#include "VectorOperation.h"

using namespace std;

VectorOperation::VectorOperation() {

}

VectorOperation::~VectorOperation() {

}

void VectorOperation::llenarVector() {
	cout << "Escriba el numero de elementos: "; cin >> n;
	vector = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Escriba un numero: ";cin >> vector[i];
	}
}

void VectorOperation::mostrarVector() {
	cout << "\n";
	cout << "Vector: " << endl;
	for (int i = 0; i < n; i++) {
		cout << vector[i] << " | ";
	}
}