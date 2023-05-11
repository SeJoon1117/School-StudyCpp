#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	Circle c;
	cout << c.getArea() << '\n';

	c = getCircle();
	cout << c.getArea() << '\n';
}