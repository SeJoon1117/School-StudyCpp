#include<iostream>
using namespace std;

class Circle {
public:
	int rad;
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() {
	rad = 1;
	cout << "�������� " << rad << "�� �� ����\n";
}
Circle::Circle(int r) {
	rad = r;
	cout << "�������� " << rad << "�� ������\n";
}
double Circle::getArea() {
	return 3.14 * rad * rad;
}

int main() {
	Circle donut;
	cout << "donut�� ������ " << donut.getArea() << "\n";

	Circle pizza(30);
	cout << "pizza�� ������ " << pizza.getArea() << "\n";
}