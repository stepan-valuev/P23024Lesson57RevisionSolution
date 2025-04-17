#include "logic.h"
#include <cassert>

int main() {
	//boundary values || ��������� ��������

	int array1[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int value = 100;
	assert(!binary_search(array1, 10, value));

	int array2[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	value = 6;
	assert(binary_search(array2, 10, value));

	cout << "All tests pass succesfully" << endl;
	return 0;
}