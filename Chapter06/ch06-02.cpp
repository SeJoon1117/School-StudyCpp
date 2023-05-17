#include<iostream>
using namespace std;

int sum(int a, int b) {
	int x = 0;
	for (a; a <= b; a++) {
		x = x + a;
	}
	return x;
}

int sum(int c) {
	int x = 0;
	for (int i = 0; i <= c; i++) {
		x = x + i;
	}
	return x;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}