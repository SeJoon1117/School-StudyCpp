#include<iostream>
using namespace std;

class num {
	int n;
};

int main() {
	cout << "���� 5�� �Է� >> ";
	int* num = new int[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum = num[i] + sum;
	}
	cout << "��� " << sum / 5;
}