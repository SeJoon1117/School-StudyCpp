#include<iostream>
using namespace std;

int main() {
	cout << "새 암호를 입력하세요>> ";
	char pass[11];
	cin >> pass;
	cout << "새 암호를 다시 한 번 입력하세요>> ";
	char npass[11];
	cin >> npass;
	if (strcmp(pass, npass) == 0) { //같으면 0을 뱉는 함수
		cout << "같습니다.";
	}
	else { cout << "같지 않습니다.";
	}
}