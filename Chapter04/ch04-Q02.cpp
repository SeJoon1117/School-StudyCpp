#include<iostream>
using namespace std;

class num {
	int n;
};

int main() {
	cout << "정수 5개 입력 >> ";
	int* num = new int[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum = num[i] + sum;
	}
	cout << "평균 " << sum / 5;
}