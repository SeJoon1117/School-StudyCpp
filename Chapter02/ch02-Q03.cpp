#include<iostream>
using namespace std;

int main() {
	cout << "두 수를 입력하라>>";
	int a, b, big;
	cin >> a >> b;
	if (a < b) {
		big = b;
	}
	else {
		big = a;
	}
	cout << "큰 수 = " << big;
}
