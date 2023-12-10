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
		cout << "Escriba un numero: "; cin >> vector[i];
	}
}

void VectorOperation::mostrarVector() {
	cout << "\n";
	cout << "Vector: " << endl;
	for (int i = 0; i < n; i++) {
		cout << vector[i] << " | ";
	}
}

void VectorOperation::mediaVector() {
	cout << "\n";
	int suma = 0;
	int promedio = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + vector[i];
			promedio = suma / n;
	}cout << "La media del vector es: " << promedio;
}