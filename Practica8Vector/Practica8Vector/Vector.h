#pragma once
#include <iostream>

using namespace std;

class Vector {
private:
	int* scoreNote;
	int quantity;
public:

	Vector();
	~Vector();

	void introduceScore();
	void showScore();
	void calculateMedia();
	void maximunScore();
	void minimunScore();
};