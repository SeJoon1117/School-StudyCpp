#include<iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << '\n';
}

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << '\n';
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << '\n';
}

void increaseCircle(Circle& c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}
int main() {
	Circle waffle(30);
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl;
}