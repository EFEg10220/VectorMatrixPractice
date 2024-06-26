#include "VectorOperation.h"

int main() {
	VectorOperation Month;
	int numberOfMonth;

	cout << "Write the month number: "; cin >> numberOfMonth;

	string nameOfMonth = Month.getMonthName(numberOfMonth);
	int daysOfMonth = Month.getMonthDay(numberOfMonth);

	if (daysOfMonth == -1) {
		cout << "Error, that is incorrect" << endl;
	} else {
		cout << "The month " << nameOfMonth << " have " << daysOfMonth << " days" << endl;
	}

	return 0;
}