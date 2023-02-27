#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void test01() {
	char ch[1024] = { 0 };
	//cout << ch << endl;
	cin.getline(ch,1024);
	cout << ch << endl;
}
void test02() {

	cout.put('a');
	//链式编程
	cout.put('h').put('e').put('l');
}
void test03() {

	//char* str = "hello world!";
	//cout.write(str, strlen(str));
	const char* str = "*************";
	for (int i = 1; i <= strlen(str); i++) {
		cout.write(str, i);
		cout << endl;
	}

	for (int i = strlen(str); i > 0; i--) {
		cout.write(str, i);
		cout << endl;
	}

}
void test04() {

	int number = 99;
	cout.width(20);
	cout.fill('*');
	cout.setf(ios::left);
	cout.unsetf(ios::dec); //卸载十进制
	cout.setf(ios::hex);
	cout.setf(ios::showbase);
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << number << endl;

}
void test05() {
	//ofstream outfile;
	string str = "helloworld!";
	ofstream outfile("D:/C++/github_cpp/day5/test.txt", ios::out|ios::trunc);
	if (!outfile.is_open()) {
		cout << "open error" << endl;
	}
	cout << "open success" << endl;
	outfile << "测试" << str <<endl;
	outfile.close();
	ifstream infile("D:/C++/github_cpp/day5/test.txt", ios::in);
	if (!infile.is_open()){
		cout << "open error " << endl;
	}
	cout << "open success" << endl;
	//char ch[1024] = { 0 };
	string ch = "";
	infile >> ch;	
	cout << ch << endl;
	
}

class Person{
public:
	Person() {
	}
	Person(string name, int age) {
		this->age = age;
		this->name, name;
	}
	int age;
private:
	string name;
};

int main() {
	string fileName = "D:/C++/github_cpp/day5/test.txt";
	ofstream outfile(fileName, ios::out | ios::binary);
	
	Person p1("张三",25);
	Person p2("里斯",28);
	outfile.write((const char*)&p1, sizeof(p1));
	outfile.write((const char*)&p2, sizeof(p2));
	outfile.close();
	ifstream infile(fileName, ios::in | ios::binary);
	if (!infile.is_open()) {
		cout << "open error" << endl;
	}
	Person p3;
	Person p4;
	infile.read((char*)&p3, sizeof(p3));
	infile.read((char*)&p4, sizeof(p4));
	cout <<  p3.age << endl;
	cout <<  p4.age << endl;
	infile.close();
	
	return 0;
}