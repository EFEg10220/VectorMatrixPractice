#include "Vector.h"

Vector::Vector(){

}

Vector::~Vector(){

}

void Vector::introduceScore(){
	cout << "Escriba el numero de notas a registrar: "; cin >> quantity;
	scoreNote = new int[quantity];

	for (int i = 0; i < quantity; i++) {
		cout << "Escriba la nota del alumno: "; cin >> scoreNote[i];
	}
}

void Vector::showScore(){
	cout << "\nNotas del alumno: " << endl;
	for (int i = 0; i < quantity; i++) {
		cout << scoreNote[i] << "\t";
	}
}

void Vector::calculateMedia(){
	double average = 0.0;
	double suma = 0.0;
	for (int i = 0; i < quantity; i++) {
		suma += scoreNote[i];
		average = suma / quantity;
	}
	cout << "\n\nEl promedio de notas del alumno es: " << average;
}

void Vector::maximunScore(){
	int maximun = scoreNote[0];
	for (int i = 0; i < quantity; i++) {
		if (maximun < scoreNote[i]) {
			maximun = scoreNote[i];
		}
	}
	cout << "\nLa nota maxima es: " << maximun;
}

void Vector::minimunScore(){
	int minimun = scoreNote[0];
	for (int i = 0; i < quantity; i++) {
		if (minimun > scoreNote[i]) {
			minimun = scoreNote[i];
		}
	}
	cout << "\nLa nota minima es: " << minimun;
}