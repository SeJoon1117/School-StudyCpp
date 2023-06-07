#include<iostream>
using namespace std;

class BankNum {
public:
	int money = 0;
	string num, name;
	BankNum() { num = "X"; name = "X"; }
	string getNum() { return num; }
	string getName() { return name; }
	void set(string num, string name) { this->num = num; this->name = name; }
};

int main() {
	BankNum BankNumArray[5];
	int menuNum, menuNum1, x, ans, i = 0;
	string num, name;
	while (true) {
		cout << "원하는 메뉴를 선택하세요.\n" << "1. 계좌 개설 신청\n" << "2. 계좌 선택\n" << "3. 프로그램 종료\n" << ">> ";
		cin >> menuNum;
		cout << "---------------------------------\n";
		if (menuNum == 1) {
			if (i == 5) { cout << "만들 수 있는 최대 계좌입니다.\n" << "---------------------------------\n"; continue; }
			cout << "계좌번호 : ";
			cin >> num;
			cout << "이름 : ";
			cin >> name;
			BankNumArray[i].set(num, name);
			BankNumArray[i].getName();
			BankNumArray[i].getNum();
			i++;
			cout << "---------------------------------\n";
		}
		else if (menuNum == 2) {
			for (int j = 0; j < 5; j++) {
				cout << j + 1 << "번 계좌. 번호 : " << BankNumArray[j].num << ", 이름 : " << BankNumArray[j].name << endl;
			}
			cout << "몇 번을 고르시겠습니까?" << ">> ";
			cin >> ans;
			cout << "---------------------------------\n";
			if (BankNumArray[ans - 1].name == "X") {
				cout << "개설되지 않은 계좌를 선택하셨습니다.\n";
				cout << "---------------------------------\n";
				continue;
			}
			cout << "선택된 계좌 메뉴.\n" << "1. 해당 계좌 입금\n" << "2. 해당 계좌 출금\n" << "3. 해당 계좌 잔액 조회\n" << ">> ";
			cin >> menuNum1;
			if (menuNum1 == 1) {
				cout << "입금 금액: ";
				cin >> x;
				cout << "입금 전 금액은: " << BankNumArray[ans - 1].money << endl;
				cout << "입금 후 금액은: " << BankNumArray[ans - 1].money + x << endl;
				cout << "---------------------------------\n";
				BankNumArray[ans - 1].money = BankNumArray[ans - 1].money + x;
			}
			else if (menuNum1 == 2) {
				cout << "출금 금액: ";
				cin >> x;
				cout << "출금 전 금액은: " << BankNumArray[ans - 1].money << endl;
				cout << "출금 후 금액은: " << BankNumArray[ans - 1].money - x << endl;
				cout << "---------------------------------\n";
				BankNumArray[ans - 1].money = BankNumArray[ans - 1].money - x;
			}
			else if (menuNum1 == 3) {
				cout << "잔액 조회: " << BankNumArray[ans - 1].money << endl;
				cout << "---------------------------------\n";
			}
		}
		else if (menuNum == 3) { cout << "프로그램을 종료합니다.\n"; break; }
		else { cout << "다시 입력해주세요.\n"; continue; }
	}
}