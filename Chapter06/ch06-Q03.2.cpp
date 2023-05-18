#include<iostream>
using namespace std;

int big(int a, int b, int c=100) {
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