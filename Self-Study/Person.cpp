#include<iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
	long callNumber;
	Person()											
		{ name = "안세준"; age = 24; callNumber = 87451107; }
	Person(string name, int callNumber, int age = 24)	
		{ this->name = name;  this->callNumber = callNumber; this->age = age; }
	Person(const Person& other)									
		{ name = other.name; age = other.age; callNumber = other.callNumber; }
	void changeName(string st)
		{ this->name = st; }
	void changeAge(int i)
		{ this->age = i; }
	void changecallNumber(int i)
		{ this->callNumber = i; }
	friend bool equals(Person se, Person bk);			

	void show() 
		{ cout << "name: " << name << endl << "age: " << age << endl << "callNumber: " << callNumber << endl; }
};

void changename(Person& se) {							
	string st;
	cout << "무엇으로 변경하시겠습니까?";
	cin >> st;
	se.changeName(st);
}

void changeage(Person& se) {							
	int i;
	cout << "무엇으로 변경하시겠습니까?";
	cin >> i;
	se.changeAge(i);
}

void changecallnumber(Person& se) {						
	int i;
	cout << "무엇으로 변경하시겠습니까?";
	cin >> i;
	se.changecallNumber(i);
}

void change(Person& se) {								
	char answer;
	string kind;
	do {
		cout << "변경하고자 하는 값이 있습니까?(Y/N)";
		cin >> answer;
		if (answer == 'y' || answer == 'Y') {
			cout << "변경하고자 하는 값은 무엇입니까?(name/age/callNumber)";
			cin >> kind;
			if (kind == "name" || kind == "NAME") {
				changename(se);
				se.show();
			}
			else if (kind == "age" || kind == "AGE") {
				changeage(se);
				se.show();
			}
			else if (kind == "callNumber" || kind == "CALLNUMBER") {
				changecallnumber(se);
				se.show();
			}
			else { cout << "잘못입력하셨습니다.\n"; change(se); }
		}
		else if (answer == 'n' || answer == 'N') {
			cout << "변경하지 않고 넘어갑니다.\n";
		}
		else { cout << "다시 입력해주세요."; change(se); }
	} while (answer == 'y' || answer == 'Y');
}

bool equals(Person se, Person bk) {
	if ((se.name == bk.name && se.age == bk.age) && se.callNumber == bk.callNumber) return true;
	else return false;
}

int main() {
	Person se, backup;
	cout << "---사용자---\n";
	se.show();
	cout << "---백업파일---\n";
	backup.show();
	change(se);
	cout << "---사용자---\n";
	se.show();
	cout << "---백업파일---\n";
	backup.show();
	cout << "---변경 여부---\n";
	if (equals(se, backup)) cout << "변경하지 않았습니다." << endl;
	else cout << "변경하였습니다." << endl;
}