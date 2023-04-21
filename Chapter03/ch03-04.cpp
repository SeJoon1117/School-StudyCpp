#include<iostream>
using namespace std;

class Circle {
public:
	int rad;
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() :Circle(1) {}

Circle::Circle(int r) {
	rad = r;
	cout << "반지름이 " << rad << "인 원생성\n";
}
double Circle::getArea() {
	return 3.14 * rad * rad;
}

int main() {
	Circle donut;
	cout << "donut의 면적은 " << donut.getArea() << "\n";

	Circle pizza(30);
	cout << "pizza의 면적은 " << pizza.getArea() << "\n";
}