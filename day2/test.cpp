#include "test.h"
#include "test2.h"

using namespace std;
//#define Param 128;
//const short param = 128;
void func3(int a) {
	cout << "int" << endl;
}
void func4(short a) {
	cout << "short" << endl;
}
void Myspace::func1() {
	std::cout << "func1" << std::endl;
	
}
void Myspace::func2() {
	std::cout << "func2" << std::endl;
}
struct student {
	int age;
	std::string name;
	void setage(int a) {
		age = a;
	}
	void setname(std::string n) {
		name = n;
	}
	void print() {
		std::cout << "name: " << name << " age: " << age << std::endl;
	}
	
};
void test1() {
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b="<< b << endl;
	cout << "-----------------" << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "-----------------" << endl;
	int& c = a;
	c = 200;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	cout << "-----------------" << endl;
	cout << "a=" << &a << endl;
	cout << "b=" << &b << endl;
	cout << "c=" << &c << endl;
	cout << "-----------------" << endl;
}
void test2() {
	int a = 100;
	int b = 200;
	int& ref = a;
	ref = b;
	cout << ref << endl;
}

void test3() {
	int arr[10];
	int(&f)[10] = arr;
	cout << sizeof(arr) << endl;
}
class cub {
public:
	void setL(int l) { ml = l; }
	void setW(int w) { mw = w; }
	void setH(int h) { mh = h; }
	int getL() { return ml; }
	int getW() { return mw; }
	int getH() { return mh; }
	int getV() { return ml * mw * mh; }
private:
	int ml;
	int mw;
	int mh;
		
};
int main() {
//	//Myspace::func1();
//	//Myspace::func2();
//	/*student s;
//	s.setage(20);
//	s.setname("zhangsan");
//	s.print();*/
//	/*int a = 10;
//	int b = 20;*/
//	//int ret = a > b ? a : b;
//	/*(a > b ? a : b)=100;
//	cout << "b:" << b << endl;*/
//	//const int a = 10;
//	//a = 100;
//	func4(param);
	//test9();
	/*int a = 3;
	int b = 4;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "===============" << endl;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;*/
	cub c1;
	c1.setL(1);
	c1.setW(2);
	c1.setH(3);
	cout << "c1.L = " << c1.getL() << endl;
	cout << "c1.W = " << c1.getW() << endl;
	cout << "c1.H = " << c1.getH() << endl;
	cout << "c1.v = " << c1.getV() << endl;
	return 0;
}