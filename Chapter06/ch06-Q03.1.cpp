#include<iostream>
using namespace std;

int big(int a, int b) {
	if (a < b) {
		if (100 < b)
			return 100;
		else return b;
	}
	else return (100 < a) ? 100 : a;
}

int big(int a, int b, int c) {
	if (a < b) {
		if (c < b)
			return c;
		else return b;
	}
	else return (100 < a) ? 100 : a;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}