#include "logic.h"
#include <cassert>

int main() {
	//boundary values || Граничные значения

	assert(count_dividers(-1) == 0);
	assert(count_dividers(-100) == 0);
	assert(count_dividers(0) == 0);
	assert(count_dividers(1) == 0);
	assert(count_dividers(2) == 0);
	assert(count_dividers(3) == 0);
	assert(count_dividers(4) == 1);

	assert(count_dividers(6) == 2);
	assert(count_dividers(24) == 6);
	assert(count_dividers(100) == 7);

	cout << "All tests pass succesfully" << endl;
	return 0;
}