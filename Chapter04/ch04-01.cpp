#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea(){
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << '\n';

	Circle* p;
	p = &donut;
	cout << p->getArea() << '\n';
	cout << (*p).getArea() << '\n';

	p = &pizza;
	cout << p->getArea() << '\n';
	cout << (*p).getArea() << '\n';
}