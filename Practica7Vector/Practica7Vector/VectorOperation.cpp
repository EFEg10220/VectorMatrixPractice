#include <iostream>
#include "VectorOperation.h"

using namespace std;

VectorOperation::VectorOperation() {

}

VectorOperation::~VectorOperation() {

}

void VectorOperation::llenarVector() {
    cout << "Escriba el numero de elementos que quiere: "; cin >> n;

    vector = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Escriba el elemento: "; cin >> vector[i];
    }
}

void VectorOperation::mostrarVector() {
    cout << "\n";
    cout << "Vector: " << endl;
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " | ";
    }
}

void VectorOperation::invertirVector() {
    cout << "\n";
    cout << "Vector invertido: " << endl;

    for (int i = n - 1; i >= 0; i--) {
        cout << vector[i] << " | ";
    }
}
