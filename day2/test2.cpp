#include "test2.h"

void test9() {
	std::cout << "test" << std::endl;
}
void swap(int& m,int& n) {
	int temp;
	temp = m;
	m = n;
	n = temp;
}