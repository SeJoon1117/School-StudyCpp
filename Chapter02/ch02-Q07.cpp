#include<iostream>
using namespace std;

int main() {
	char end[100];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>> ";
		cin.getline(end, 100, '\n');
		if (strcmp(end, "yes") == 0) {
			cout << "�����մϴ�.";
			break;
		}
		else {
			continue;
		}
	}
}