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
		cout << "���ϴ� �޴��� �����ϼ���.\n" << "1. ���� ���� ��û\n" << "2. ���� ����\n" << "3. ���α׷� ����\n" << ">> ";
		cin >> menuNum;
		cout << "---------------------------------\n";
		if (menuNum == 1) {
			if (i == 5) { cout << "���� �� �ִ� �ִ� �����Դϴ�.\n" << "---------------------------------\n"; continue; }
			cout << "���¹�ȣ : ";
			cin >> num;
			cout << "�̸� : ";
			cin >> name;
			BankNumArray[i].set(num, name);
			BankNumArray[i].getName();
			BankNumArray[i].getNum();
			i++;
			cout << "---------------------------------\n";
		}
		else if (menuNum == 2) {
			for (int j = 0; j < 5; j++) {
				cout << j + 1 << "�� ����. ��ȣ : " << BankNumArray[j].num << ", �̸� : " << BankNumArray[j].name << endl;
			}
			cout << "�� ���� ���ðڽ��ϱ�?" << ">> ";
			cin >> ans;
			cout << "---------------------------------\n";
			if (BankNumArray[ans - 1].name == "X") {
				cout << "�������� ���� ���¸� �����ϼ̽��ϴ�.\n";
				cout << "---------------------------------\n";
				continue;
			}
			cout << "���õ� ���� �޴�.\n" << "1. �ش� ���� �Ա�\n" << "2. �ش� ���� ���\n" << "3. �ش� ���� �ܾ� ��ȸ\n" << ">> ";
			cin >> menuNum1;
			if (menuNum1 == 1) {
				cout << "�Ա� �ݾ�: ";
				cin >> x;
				cout << "�Ա� �� �ݾ���: " << BankNumArray[ans - 1].money << endl;
				cout << "�Ա� �� �ݾ���: " << BankNumArray[ans - 1].money + x << endl;
				cout << "---------------------------------\n";
				BankNumArray[ans - 1].money = BankNumArray[ans - 1].money + x;
			}
			else if (menuNum1 == 2) {
				cout << "��� �ݾ�: ";
				cin >> x;
				cout << "��� �� �ݾ���: " << BankNumArray[ans - 1].money << endl;
				cout << "��� �� �ݾ���: " << BankNumArray[ans - 1].money - x << endl;
				cout << "---------------------------------\n";
				BankNumArray[ans - 1].money = BankNumArray[ans - 1].money - x;
			}
			else if (menuNum1 == 3) {
				cout << "�ܾ� ��ȸ: " << BankNumArray[ans - 1].money << endl;
				cout << "---------------------------------\n";
			}
		}
		else if (menuNum == 3) { cout << "���α׷��� �����մϴ�.\n"; break; }
		else { cout << "�ٽ� �Է����ּ���.\n"; continue; }
	}
}