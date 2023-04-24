#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "������ ���� radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "������ ���� radius= " << radius << '\n';	}
	~Circle() { cout << "�Ҹ��� ���� radius= " << radius << '\n'; }
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