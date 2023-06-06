#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "생성자 실행 radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "생성자 실행 radius= " << radius << '\n'; }
	~Circle() { cout << "소멸자 실행 radius= " << radius << '\n'; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { radius = r; }
};

int main() {
	Circle* p, * q;
	p = new Circle();
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;

}
