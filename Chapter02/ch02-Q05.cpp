#include<iostream>
using namespace std;

int main() {
	cout << "문자열을 입력하라(100개 미만).";
	char ch[100];
	int count = 0;
	cin.getline(ch, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (ch[i] == 'x') {
			count++;
		}
	}
	cout << "x의 개수는" << count;
}