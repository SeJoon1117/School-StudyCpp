#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea() { return radius * radius * 3.14; }
};

int main() {
	Circle CircleArray[3];
	int count = 0;
	for (int i = 1; i < 4; i++) {
		cout << "��" << i << "�� ������ >> ";
		int r;
		cin >> r;
		CircleArray[i].setRadius(r);
		if (CircleArray[i].getArea() > 100) {
			count++;
		}		
	}
	cout << "������ 100���� ū ����" << count << "�� �Դϴ�.";
}