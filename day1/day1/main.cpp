#include <iostream>
#include <string>
using namespace std;
namespace A {
	int a = 10;
	
}
namespace B {
	int a = 20;
}
namespace A {
	void func() {
		cout << "hello" << endl;
	}
}

void test() {
	std::cout << "A::a=" << A::a << std::endl;
	//std::cout << "B::a=" << A::B::a << std::endl;
	A::func();
}
int main() {
	test();
	return 0;
}