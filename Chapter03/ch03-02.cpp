#include<iostream>
using namespace std;

class Rectangle {
public:
	int h, w;
	int getArea();
};

int Rectangle::getArea() {
	return h * w;
}

int main() {
	Rectangle rect;
	rect.h = 3;
	rect.w = 5;
	cout << "사각형의 면적은 " << rect.getArea();
}
