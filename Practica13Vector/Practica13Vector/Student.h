#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	Student();
	~Student();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();

	void showStudent();
	bool isOlderThan18() const;
};