#include<iostream>
using namespace std;

int main() {
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	char pass[11];
	cin >> pass;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>> ";
	char npass[11];
	cin >> npass;
	if (strcmp(pass, npass) == 0) { //������ 0�� ��� �Լ�
		cout << "�����ϴ�.";
	}
	else { cout << "���� �ʽ��ϴ�.";
	}
}