#include<iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);	//3.0은 double 형이라 정상 작동
	//cout << square(3);	int 형인 3은 double, float 두 가지로 변형 따라서, 오류
}