#pragma once
class MyArray {
public:
	MyArray();//Ĭ�Ϲ��캯��
	explicit MyArray(int capacity);//���캯��
	void setData(int value, int index);//��������
	void getData(int pos);//��ȡָ��λ������
	void pushback(int value);//β���������
	void getLength();
	~MyArray();
private:
	int mCapacity;
	int mSize;
	int* mAdress;
};