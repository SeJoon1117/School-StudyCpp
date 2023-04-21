#include<iostream>
using namespace std;

int main() {
	char end[100];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요>> ";
		cin.getline(end, 100, '\n');
		if (strcmp(end, "yes") == 0) {
			cout << "종료합니다.";
			break;
		}
		else {
			continue;
		}
	}
}