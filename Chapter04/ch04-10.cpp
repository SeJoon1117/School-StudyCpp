#include<iostream>
using namespace std;

class Circle {
public:
	int radius = 0;
	Circle() { radius = 1; }
	Circle(int r) { radius = 4; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int r) { radius = r; }
};
int main() {
	cout << "�����ϰ��� �ϴ� ���� ������?";
	int num, r, count = 0;
	cin >> num;
	Circle* O = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "��" << i + 1 << ':';
		cin >> r;
		O[i].setRadius(r); 
	}
	Circle* p = O;
	for (int i = 0; i < num; i++) {
		cout << p->getArea() << '\t';
		if (p->getArea() < 200 && p->getArea() > 100) {
			count++;
		}
		p++;
	}
	cout << "\n������ 100���� 200 ������ ���� ������" << count;
}