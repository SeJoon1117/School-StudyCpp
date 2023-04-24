#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "积己磊 角青 radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "积己磊 角青 radius= " << radius << '\n'; }
	~Circle() { cout << "家戈磊 角青 radius= " << radius << '\n'; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { radius = r; }
};
int main() {
	Circle* CCC = new Circle[3];
	CCC[0].setRadius(10);
	CCC[1].setRadius(20);
	CCC[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << CCC[i].getArea() << endl;
	}
	Circle* p = CCC;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}

	delete[]CCC;
}