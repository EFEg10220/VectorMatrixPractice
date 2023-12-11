#pragma once
#include <iostream>

using namespace std;

class Vector {
private:
	int* scoreNote;
	int quantity = 5;
public:

	Vector();
	~Vector();

	void introduceScore();
	void showScore();
	void calculateMedia();
	void maximunScore();
	void minimunScore();
};