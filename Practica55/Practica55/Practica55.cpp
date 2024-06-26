#include <iostream>
using namespace std;

void generateArray(int vector[], int size) {
    for (int i = 0; i < size; ++i) {
        vector[i] = rand() % 201 - 100;
    }
}

int countPositives(int vector[], int size) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (vector[i] > 0) {
            counter++;
        }
    }
    return counter;
}

void displayMatrix(int vector[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << vector[i] << "\t";
        if ((i + 1) % 20 == 0)
            cout << endl;
    }
    cout << endl;
}

void showMain(const int size, int vector[]) {
    generateArray(vector, size);

    cout << "Generated Matrix:" << endl;
    displayMatrix(vector, size);

    int positiveCount = countPositives(vector, size);

    cout << "Number of positive elements: " << positiveCount << endl;
}
int main() {
    const int size = 1000;
    int vector[size];

    srand(time(0));
    showMain(size, vector);


    return 0;
}
