#include<iostream>
using namespace std;

int main() {
	cout << "5���� �Ǽ��� �Է��϶�>>";
	float num[5], big = 0;
	for (int i = 0; i < 5; i ++ ) {
		cin >> num[i];
	}
	for (int i = 0; i < 5; i++) {
		if (big < num[i]) {
			big = num[i];
		}
	}
	cout << "���� ū �� = " << big;
}