#include<iostream>
using namespace std;

class Oval {
public:
	int w, h;
	Oval(int a, int b) {
		w = a, h = b;
	}
	Oval() { w = h = 1; }
	~Oval() {
		cout << w << "," << h;
	}
	int getW() {
		return w;
	}
	int getH() {
		return h;
	}
	void set(int x, int y) {
		w = x, h = y;
	}
	void show() {
		cout << "width = " << w << ", height = " << h << '\n';
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getW() << ',' << b.getH() << '\n';
}