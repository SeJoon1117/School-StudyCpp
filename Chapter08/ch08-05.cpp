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
	//x.a = 5;		a는 Derived 클래스 상속이지만 private 멤버이므로 접근 불가
	//x.setA(10);	setA와 showA는 protected로 바뀌어서 Derived로 넘어오기 때문에 Derived 클래스 외부에서 접근 불가
	//x.showA();	
	//x.b = 10;		b는 private멤버이므로 Derived 클래스 외부에서 접근 불가
	//x.setB(10);	setB는 protected멤버이므로 main()에서 접근 불가
	x.showB();		//x.showB()는 public멤버이기 때문에 누구나 접근 가능
}