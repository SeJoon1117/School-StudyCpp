#include<iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle() { radius = 1; cout << "생성자 실행 radius= " << radius << '\n'; }
	Circle(int r) { radius = r; cout << "생성자 실행 radius= " << radius << '\n'; }
	~Circle() { cout << "소멸자 실행 radius= " << radius << '\n'; }
	double getArea() { return 3.14 * radius * radius; }
	void setRadius(int r) { radius = r; }
};
int main() {
	int r;
	while (true) {
		cout << "정수 반지름 입력(음수이면 종료) >>";
		cin >> r;
		if (r < 0) { break; }
		Circle* O = new Circle(r);
		cout << "원의 면적은 " << O->getArea() << '\n';
		delete O;
	}
}