#include<iostream>
using namespace std;

int main() {
	cout << "�Է��� ������ ������";
	int num;
	cin >> num;
	if (num <= 0) return 0;
	int* p = new int[num];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° ����: ";
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += p[i];
	}
	cout << "��� = " << sum / num;

	delete []p;
}