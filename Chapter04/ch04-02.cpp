#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle CircleArray[3];

	CircleArray[0].setRadius(10);
	CircleArray[1].setRadius(20);
	CircleArray[2].setRadius(30);
	
	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << CircleArray[i].getArea() << '\n';
	}

	Circle* p;
	p = CircleArray;
	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적은" << p->getArea() << '\n';
		p++;
	}
}
