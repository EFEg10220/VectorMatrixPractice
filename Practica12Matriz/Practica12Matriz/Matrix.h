#pragma once
class Matrix {
private:
	static const int rows = 8;
	static const int colum = 6;
	int firstTable[rows][colum];
	int secondTable[rows][colum];
	int resultTable[rows][colum];


public:

	Matrix();
	~Matrix();

	void initMatrix1();
	void showMatrix1();
	void initMatrix2();
	void showMatrix2();
	void sumaMatrix();

};