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
		setA(5);		//setA는 Base클래스의 protected 멤버이기 때문에 접근 가능
		showA();		//showA는 Base클래스의 public 멤버이기 때문에 접근 가능
		cout << 5;
	}
};

class GrandDerived : private Derived {
	int c;
protected:
	void setAB(int x) {
		//setA(x);		setA는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 접근 불가능
		//showA();		showA는 private 속성으로 변경되어 Derived 클래스에 상속되기 때문에 접근 불가능
		setB(x);		//setB는 Derived클래스의 protected 멤버이기 때문에 접근 가능
	}
};