#include<iostream>
using namespace std;

int main() {
	cout << "���ڿ� �Է�>>";
	char ch[50];
	cin >> ch;
	int len = strlen(ch);
	for (int i = 0; i < len; i++) {
		for (int r = 0; r <= i; r++) {
			cout << ch[r];
		}
		cout << "\n";
	}
}