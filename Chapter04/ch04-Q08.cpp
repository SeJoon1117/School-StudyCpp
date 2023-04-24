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
	cout << "원의 개수 >> ";
	int num, radius, count=0;
	Circle* p;
	cin >> num;
	p = new Circle[num];
	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int r;
		cin >> r;
		p->setRadius(r);
		if (p->getArea() > 100) {
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다.";
}