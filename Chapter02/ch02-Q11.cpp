#include<iostream>
using namespace std;

int main() {
	cout << "�� ���� �Է��ϼ���>>";
	int num, sum = 0;
	cin >> num;
	for (int i = 0; i <= num; i++) {
		sum = i + sum;
	}
	cout << "1���� " << num << "������ ����" << sum << "�Դϴ�.";
}