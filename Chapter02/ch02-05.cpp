#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cout << "프로그램을 종료하려면 암호를 입력하세요.\n";
	char pass[11];
	while (true) {
		cout << "암호>>";
		cin >> pass;
		if (strcmp(pass, "C++") ==0) {
			cout << "프로그램을 종료합니다.\n";
			break;
		}
		else {
			cout << "암호가 틀립니다.\n";
		}
	}
}