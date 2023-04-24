#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "积己磊 角青 radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "积己磊 角青 radius= " << radius << '\n';	}
	~Circle() { cout << "家戈磊 角青 radius= " << radius << '\n'; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { radius = r; }
};

int main() {
	Circle* p, * q;
	p = new Circle();
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;

}