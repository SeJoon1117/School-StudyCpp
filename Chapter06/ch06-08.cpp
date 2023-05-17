#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int add(int a, int& b) {
	b = b + a;
	return b;
}

int main() {
	int s = 10, t = 20;
	cout << add(s, t);	//s 와 t를 어떠한 함수를 부를지 모호하여 오류
}