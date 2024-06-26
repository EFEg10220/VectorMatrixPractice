#include "VectorOperation.h"

VectorOperation::VectorOperation() {
	months[0] = "January"; days[0] = 31;
	months[1] = "February"; days[1] = 28;
	months[2] = "March"; days[2] = 31;
	months[3] = "April"; days[3] = 30;
	months[4] = "May"; days[4] = 31;
	months[5] = "June"; days[5] = 30;
	months[6] = "July"; days[6] = 31;
	months[7] = "August"; days[7] = 31;
	months[8] = "September"; days[8] = 30;
	months[9] = "October"; days[9] = 31;
	months[10] = "November"; days[10] = 30;
	months[11] = "December"; days[11] = 31;
}

VectorOperation::~VectorOperation() {

}

string VectorOperation::getMonthName(int monthNumber) {
	bool isSmaller = monthNumber < 1;
	bool isHigher = monthNumber > 12;

	if (isSmaller || isHigher) {
		return "ERROR";
	}

	return months[monthNumber - 1];
}

int VectorOperation::getMonthDay(int monthNumber) {
	bool isSmaller = monthNumber < 1;
	bool isHigher = monthNumber > 12;

	if (isSmaller || isHigher) {
		return -1;
	}

	return days[monthNumber - 1];
}