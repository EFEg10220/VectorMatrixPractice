#include "Student.h"


Student::Student() {
	name = "";
	age = 0;
}

Student::~Student() {

}

void Student::setName(string _name) {
	name = _name;
}

string Student::getName() {
	return name;
}

void Student::setAge(int _age) {
	age = _age;
}

int Student::getAge() {
	return age;
}

void Student::showStudent() {
	cout << "______________________" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

bool Student::isOlderThan18() const {
	return age >= 18;
}