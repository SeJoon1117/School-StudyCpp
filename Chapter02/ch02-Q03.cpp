#include<iostream>
using namespace std;

int main() {
	cout << "�� ���� �Է��϶�>>";
	int a, b, big;
	cin >> a >> b;
	if (a < b) {
		big = b;
	}
	else {
		big = a;
	}
	cout << "ū �� = " << big;
}