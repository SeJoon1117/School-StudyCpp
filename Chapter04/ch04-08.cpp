#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "������ ���� radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "������ ���� radius= " << radius << '\n'; }
	~Circle() { cout << "�Ҹ��� ���� radius= " << radius << '\n'; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { radius = r; }
};
int main() {
	int r;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����) >>";
		cin >> r;
		if (r < 0) { break; }
		Circle* O = new Circle(r);
		cout << "���� ������ " << O->getArea() << '\n';
		delete O;
	}
}