#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���.\n";
	char pass[11];
	while (true) {
		cout << "��ȣ>>";
		cin >> pass;
		if (strcmp(pass, "C++") ==0) {
			cout << "���α׷��� �����մϴ�.\n";
			break;
		}
		else {
			cout << "��ȣ�� Ʋ���ϴ�.\n";
		}
	}
}