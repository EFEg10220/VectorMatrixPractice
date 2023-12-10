#include <iostream>
#include "VectorOperation.h"

using namespace std;

int main() {
	VectorOperation* vector = new VectorOperation();

	vector->llenarVector();
	vector->mostrarVector();
}