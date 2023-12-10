#pragma once

class VectorOperation {

private:
	int n;
	int* vector;
public: 

	VectorOperation();
	~VectorOperation();

	void llenarVector();
	void mostrarVector();
};