#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int n, * numberList;

void pedirNumeros() {

	srand(time(NULL));
	cout << "Escriba el numero de elementos: "; cin >> n;
	numberList = new int[n];

	cout << "Vector original:" << endl;
	for (int i = 0; i < n; i++) {
		numberList[i] = rand() % 10;
		cout << numberList[i] << " | ";
	}cout << endl;
}

void elevarCuadrado() {

	cout << "Vector a la 2:" << endl;

	for (int i = 0; i < n; i++) {
		int vectorCuadrado[1000];

		vectorCuadrado[i] = numberList[i] * numberList[i];
		cout << vectorCuadrado[i] << " | ";
	}cout << endl;
}

void elevarCubo() {
	cout << "Vector a la 3: " << endl;

	for (int i = 0; i < n; i++) {
		int vectorCubo[1000];

		vectorCubo[i] = (numberList[i] * numberList[i]) * numberList[i];
		cout << vectorCubo[i] << " | ";
	}

}

int main() {
	pedirNumeros();
	elevarCuadrado();
	elevarCubo();

	delete[] numberList;

	return 0;
}