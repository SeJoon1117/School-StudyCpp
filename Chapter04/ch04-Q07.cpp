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
		cout << "원" << i << "의 반지름 >> ";
		int r;
		cin >> r;
		CircleArray[i].setRadius(r);
		if (CircleArray[i].getArea() > 100) {
			count++;
		}		
	}
	cout << "면적이 100보다 큰 원은" << count << "개 입니다.";
}