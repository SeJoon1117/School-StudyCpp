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
	cout << "생성하고자 하는 원의 개수는?";
	int num, r, count = 0;
	cin >> num;
	Circle* O = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "원" << i + 1 << ':';
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
	cout << "\n면적이 100에서 200 사이인 원의 개수는" << count;
}