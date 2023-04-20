#include<iostream>
using namespace std;

int main() {
	cout << "5개의 실수를 입력하라>>";
	float num[5], big = 0;
	for (int i = 0; i < 5; i ++ ) {
		cin >> num[i];
	}
	for (int i = 0; i < 5; i++) {
		if (big < num[i]) {
			big = num[i];
		}
	}
	cout << "제일 큰 수 = " << big;
}