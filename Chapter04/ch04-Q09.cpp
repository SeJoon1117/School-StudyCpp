#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() { ; }
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { name = name, tel = tel; }
};

int main() {
	Person PersonArray[3];
	string n, t;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���.\n";
	for (int i = 0; i < 3; i++) {
		cout << "��� " << 1 + i << ">>";
		cin >> n >> t;
		PersonArray[i].set(n, t);
		PersonArray[i].getName();
		PersonArray[i].getTel();
	}
	cout << "��� ����� �̸���" << PersonArray[0].getName() << PersonArray[1].getName() << PersonArray[2].getName();
	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���. >>";
	string x, y;
	cin >> x;
	for (int i = 0; i < 3; i++) {
		if (PersonArray[i].getName() == x) {
			y = PersonArray[i].getTel();
		}
	}
	cout << "��ȭ��ȣ�� " << y;
}