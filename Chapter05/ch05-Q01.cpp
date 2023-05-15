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
	cout << "a 원 함수 사용 전 반지름" << a.radius << endl;
	cout << "b 원 함수 사용 전 반지름" << b.radius << endl;
	swap(a, b);
	cout << "a 원 함수 사용 후 반지름" << a.radius << endl;
	cout << "b 원 함수 사용 후 반지름" << b.radius << endl;
}