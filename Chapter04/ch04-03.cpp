#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() {radius = 1; }
	Circle(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
int main() {
	Circle circleArray[3] = { Circle(10),Circle(20),Circle(30) };

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;
	}
}