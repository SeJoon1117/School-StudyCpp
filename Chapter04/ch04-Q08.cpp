#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
int main() {
	cout << "���� ���� >> ";
	int num, radius, count=0;
	Circle* p;
	cin >> num;
	p = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		int r;
		cin >> r;
		p->setRadius(r);
		if (p->getArea() > 100) {
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�.";
}