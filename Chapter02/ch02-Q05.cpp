#include<iostream>
using namespace std;

int main() {
	cout << "���ڿ��� �Է��϶�(100�� �̸�).";
	char ch[100];
	int count = 0;
	cin.getline(ch, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (ch[i] == 'x') {
			count++;
		}
	}
	cout << "x�� ������" << count;
}