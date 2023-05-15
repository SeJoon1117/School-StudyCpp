#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int radius) { this->radius = radius; }
};

void swap(Circle &a, Circle &b) {
	Circle x(1);
	x.setRadius(a.radius);
	a.setRadius(b.radius);
	b.setRadius(x.radius);
}

int main() {
	Circle a(10);
	Circle b(100);
	cout << "a �� �Լ� ��� �� ������" << a.radius << endl;
	cout << "b �� �Լ� ��� �� ������" << b.radius << endl;
	swap(a, b);
	cout << "a �� �Լ� ��� �� ������" << a.radius << endl;
	cout << "b �� �Լ� ��� �� ������" << b.radius << endl;
}