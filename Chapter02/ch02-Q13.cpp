#include<iostream>
using namespace std;

int main() {
	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

	while (true) {
		cout << "«��:1, ¥�� :2, ������:3, ����:4 >> ";
		int num = 0, many;
		cin >> num;
		if (num == 1) {
			cout << "���κ�?";
			many = 0;
			cin >> many;
			cout << "«�� " << many << "�κ� ���Խ��ϴ�.\n";
		}
		if (num == 2) {
			cout << "���κ�?";
			many = 0;
			cin >> many;
			cout << "¥�� " << many << "�κ� ���Խ��ϴ�.\n";
		}
		if (num == 3) {
			cout << "���κ�?";
			many = 0;
			cin >> many;
			cout << "������ " << many << "�κ� ���Խ��ϴ�.\n";
		}
		if (num == 4) {
			cout << "���� ������ �������ϴ�.\m";
			break;
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!\m";
		}
	}
}