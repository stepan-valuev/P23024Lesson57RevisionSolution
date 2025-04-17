#include "logic.h"

int count(int number, int devider) {
	if (devider == 1) {
		return 0;
	}
	int c = number % devider == 0 ? 1 : 0;

	return c + count(number, devider - 1);
}

int count_deviders(int number) {
	if (number < 4) {
		return 0;
	}

	return count(number, number / 2);
}