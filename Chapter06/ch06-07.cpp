#include<iostream>
using namespace std;

float square(float a) {
	return a * a;
}

double square(double a) {
	return a * a;
}

int main() {
	cout << square(3.0);	//3.0�� double ���̶� ���� �۵�
	//cout << square(3);	int ���� 3�� double, float �� ������ ���� ����, ����
}