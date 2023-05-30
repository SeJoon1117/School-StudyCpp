#include<iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show() {
		cout << "kick= " << kick << ", punch= " << punch << endl;
	}
	friend Power operator+(Power op1, Power op2) {
		Power tmp;
		tmp.kick = op1.kick + op2.kick;
		tmp.punch = op1.punch + op2.punch;
		return tmp;
	}
};

int main() {
	Power a(3, 5), b(4, 6), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
}