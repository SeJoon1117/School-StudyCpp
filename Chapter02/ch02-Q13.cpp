#include<iostream>
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (true) {
		cout << "짬뽕:1, 짜장 :2, 군만두:3, 종료:4 >> ";
		int num = 0, many;
		cin >> num;
		if (num == 1) {
			cout << "몇인분?";
			many = 0;
			cin >> many;
			cout << "짬뽕 " << many << "인분 나왔습니다.\n";
		}
		if (num == 2) {
			cout << "몇인분?";
			many = 0;
			cin >> many;
			cout << "짜장 " << many << "인분 나왔습니다.\n";
		}
		if (num == 3) {
			cout << "몇인분?";
			many = 0;
			cin >> many;
			cout << "군만두 " << many << "인분 나왔습니다.\n";
		}
		if (num == 4) {
			cout << "오늘 영업은 끝났습니다.\m";
			break;
		}
		else {
			cout << "다시 주문하세요!!\m";
		}
	}
}