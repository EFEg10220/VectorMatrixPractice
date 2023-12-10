#pragma once

class VectorOperation {

private:
	int* vector;
	int n;

public:

	VectorOperation();
	~VectorOperation();

	void llenarVector();
	void mostrarVector();
	void mediaVector();

};
