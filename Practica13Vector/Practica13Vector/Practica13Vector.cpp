#include "Student.h"

int main() {
	int numberOfStudents;
	string name;
	int age;

	cout << "Quantity of students: "; cin >> numberOfStudents;

	Student* students = new Student[numberOfStudents];

	for (int i = 0; i < numberOfStudents; i++) {
		cout << "Name of student " << i + 1 << ": "; cin >> ws;
		getline(cin, name);

		cout << "Age of student " << i + 1 << ": "; cin >> age;

		students[i].setName(name);
		students[i].setAge(age);
	}

	cout << "\nStudents information: " << endl;

	for (int i = 0; i < numberOfStudents; i++) {
		students[i].showStudent();
	}

	cout << "\n-------------------------";
	cout << "\nOlder students: " << endl;

	for (int i = 0; i < numberOfStudents; i++) {
		bool isMajor = students[i].isOlderThan18();
		if (isMajor) {
			cout << students[i].getName() << endl;
		}
	}

	delete[] students;
}