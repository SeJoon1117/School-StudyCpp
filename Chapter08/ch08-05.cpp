#include<iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : protected Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() { cout << b; }
};

int main() {
	Derived x;
	//x.a = 5;		a�� Derived Ŭ���� ��������� private ����̹Ƿ� ���� �Ұ�
	//x.setA(10);	setA�� showA�� protected�� �ٲ� Derived�� �Ѿ���� ������ Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.showA();	
	//x.b = 10;		b�� private����̹Ƿ� Derived Ŭ���� �ܺο��� ���� �Ұ�
	//x.setB(10);	setB�� protected����̹Ƿ� main()���� ���� �Ұ�
	x.showB();		//x.showB()�� public����̱� ������ ������ ���� ����
}