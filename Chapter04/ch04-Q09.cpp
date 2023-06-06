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
	void set(string name, string tel) { this->name = name, this->tel = tel; }
};

int main() {
	Person PersonArray[3];
	string n, t;
	cout << "이름과 전화 번호를 입력해 주세요.\n";
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << 1 + i << ">>";
		cin >> n >> t;
		PersonArray[i].set(n, t);
		PersonArray[i].getName();
		PersonArray[i].getTel();
	}
	cout << "모든 사람의 이름은" << PersonArray[0].getName() << " " << PersonArray[1].getName() << " " << PersonArray[2].getName();
	cout << "\n전화번호 검색합니다. 이름을 입력하세요. >>";
	string x, y;
	cin >> x;
	for (int i = 0; i < 3; i++) {
		if (PersonArray[i].getName() == x) {
			y = PersonArray[i].getTel();
		}
	}
	cout << "전화번호는 " << y;
}
