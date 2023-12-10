#include <iostream>
#include "Matrix.h"

using namespace std;

int main(){
    Matrix* matriz = new Matrix;

    matriz->initMatrix1();
    matriz->showMatrix1();
    matriz->initMatrix2();
    matriz->showMatrix2();
    matriz->sumaMatrix();

}
