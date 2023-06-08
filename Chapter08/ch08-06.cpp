#include<iostream>
using namespace std;

class Base {
	int a;
protected:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
	int b;
protected:
	void setB(int b) { this->b = b; }
public:
	void showB() {
		setA(5);		//setA�� BaseŬ������ protected ����̱� ������ ���� ����
		showA();		//showA�� BaseŬ������ public ����̱� ������ ���� ����
		cout << 5;
	}
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int x) {
		//setA(x);		setA�� private �Ӽ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ ���� �Ұ���
		//showA();		showA�� private �Ӽ����� ����Ǿ� Derived Ŭ������ ��ӵǱ� ������ ���� �Ұ���
		setB(x);		//setB�� DerivedŬ������ protected ����̱� ������ ���� ����
	}
};