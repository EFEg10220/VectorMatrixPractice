#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Matrix.h"

using namespace std;

Matrix::Matrix() {

}

Matrix::~Matrix() {

}

void Matrix::initMatrix1() {
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colum; j++) {
			firstTable[i][j] = rand() % 20;
		}
	}
}

void Matrix::showMatrix1() {
	cout << "Matrix 1: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colum; j++) {
			cout << firstTable[i][j] << "\t";
		}cout << endl;
	}
}

void Matrix::initMatrix2() {
	srand(time(NULL));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colum; j++) {
			secondTable[i][j] = rand() % 19;
		}
	}
}

void Matrix::showMatrix2() {
	cout << endl;
	cout << "Matrix 2: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colum; j++) {
			cout << secondTable[i][j] << "\t";
		}cout << endl;
	}
}

void Matrix::sumaMatrix() {
	cout << endl;
	cout << "Matrix sumada: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colum; j++) {
			resultTable[i][j] = firstTable[i][j] + secondTable[i][j];
			cout << resultTable[i][j] << "\t";
		}cout << endl;
	}
}