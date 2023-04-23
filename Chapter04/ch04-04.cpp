#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int r) { radius = r; }
};

int main() {
	Circle CircleArray[2][3];

	CircleArray[0][0].setRadius(1);
	CircleArray[0][1].setRadius(2);
	CircleArray[0][2].setRadius(3);
	CircleArray[1][0].setRadius(4);
	CircleArray[1][1].setRadius(5);
	CircleArray[1][2].setRadius(6);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Circle[" << i << "," << j << "의 면적은" << CircleArray[i][j].getArea() << '\n';
		}
	}
}
