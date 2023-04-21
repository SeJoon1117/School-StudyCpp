#include<iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() {
		cout << "(" << x << "," << y << ")\n";
	}
};
Point::Point() { x = 0, y = 0; }
Point::Point(int a, int b) { x = a, y = b; }

int main() {
	Point P1;
	Point P2(10, 20);
	P1.show();
	P2.show();
}