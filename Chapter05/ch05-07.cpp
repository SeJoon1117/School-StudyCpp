#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle &c) {
	cout << "���� ������ �������� �Է��ϼ���>>";
	int r;
	cin >> r;
	c.setRadius(r);
}

int main() {
	Circle donut;
	int r;
	readRadius(donut);
	cout << "donut�� ���� = " << donut.getArea() << '\'n';

}