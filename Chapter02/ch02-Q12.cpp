#include<iostream>
using namespace std;
int sums(int a, int b);

int main() {
	cout << "�� ���� �Է��ϼ���>>";
	int num;
	cin >> num;
	cout << "1���� " << num << "������ ����" << sums(1, num);
}

int sums(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum = i + sum;
	}
	return sum;
}