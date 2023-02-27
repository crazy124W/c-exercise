#pragma once
class MyArray {
public:
	MyArray();//默认构造函数
	explicit MyArray(int capacity);//构造函数
	void setData(int value, int index);//设置数据
	void getData(int pos);//获取指定位置数据
	void pushback(int value);//尾部添加数据
	void getLength();
	~MyArray();
private:
	int mCapacity;
	int mSize;
	int* mAdress;
};