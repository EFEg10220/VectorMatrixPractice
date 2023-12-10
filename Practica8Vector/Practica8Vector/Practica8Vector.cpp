#include "Vector.h"

int main(){
	Vector* vector = new Vector();
	vector->introduceScore();
	vector->showScore();
	vector->calculateMedia();
	vector->maximunScore();
	vector->minimunScore();

	delete vector;
}