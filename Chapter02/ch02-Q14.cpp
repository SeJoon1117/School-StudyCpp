#include<iostream>
using namespace std;

int main() {
	cout << "���������� 2000���� �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";
	char coffee[100];
	int num, money = 0;
	for (money = 0; money < 20000;) {
		cout << "�ֹ�>>\n";
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			cout << num * 2000 << "���Դϴ�. ���ְ� �弼��\n";
			money = money + num * 2000;
		}
		if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			cout << num * 2300 << "���Դϴ�. ���ְ� �弼��\n";
			money = money + num * 2300;
		}
		if (strcmp(coffee, "īǪġ��") == 0) {
			cout << num * 2500 << "���Դϴ�. ���ְ� �弼��\n";
			money = money + num * 2500;
		}
	}
	cout << "���� " << money << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~";
}