#include<iostream>
using namespace std;

class Circle {
public:
	int r;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * r * r;
}

int main() {
	Circle donut;
	donut.r = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizze;
	pizze.r = 30;
	cout << "pizze 면적은 " << pizze.getArea();
}
