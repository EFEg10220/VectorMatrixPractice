#include "Vector.h"

int main(){
	Vector* vector = new Vector();
	cout << "Vector original: " << endl;
	vector->initArray();
	vector->showArray();
	vector->orderArray();
	vector->showArray();
	delete vector;
}
