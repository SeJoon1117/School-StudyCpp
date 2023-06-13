#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point() { ; }
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	int x = 0, y = 0;
	string color;
public:
	ColorPoint(int x = 0, int y = 0, string color = "BLACK") {
		move(x, y); this->color = color;
	}
	void setPoint(int x = 0, int y = 0) {
		move(x, y);
	}
	void setColor(string color = " ") {
		this->color = color;
	}
	string getColor() {
		return color;
	}
	void show() {
		cout << getColor() << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.\n";
	}
};

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}