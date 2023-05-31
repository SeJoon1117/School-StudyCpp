#include<iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
	long callNumber;
	Person()											
		{ name = "�ȼ���"; age = 24; callNumber = 87451107; }
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
	cout << "�������� �����Ͻðڽ��ϱ�?";
	cin >> st;
	se.changeName(st);
}

void changeage(Person& se) {							
	int i;
	cout << "�������� �����Ͻðڽ��ϱ�?";
	cin >> i;
	se.changeAge(i);
}

void changecallnumber(Person& se) {						
	int i;
	cout << "�������� �����Ͻðڽ��ϱ�?";
	cin >> i;
	se.changecallNumber(i);
}

void change(Person& se) {								
	char answer;
	string kind;
	do {
		cout << "�����ϰ��� �ϴ� ���� �ֽ��ϱ�?(Y/N)";
		cin >> answer;
		if (answer == 'y' || answer == 'Y') {
			cout << "�����ϰ��� �ϴ� ���� �����Դϱ�?(name/age/callNumber)";
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
			else { cout << "�߸��Է��ϼ̽��ϴ�.\n"; change(se); }
		}
		else if (answer == 'n' || answer == 'N') {
			cout << "�������� �ʰ� �Ѿ�ϴ�.\n";
		}
		else { cout << "�ٽ� �Է����ּ���."; change(se); }
	} while (answer == 'y' || answer == 'Y');
}

bool equals(Person se, Person bk) {
	if ((se.name == bk.name && se.age == bk.age) && se.callNumber == bk.callNumber) return true;
	else return false;
}

int main() {
	Person se, backup;
	cout << "---�����---\n";
	se.show();
	cout << "---�������---\n";
	backup.show();
	change(se);
	cout << "---�����---\n";
	se.show();
	cout << "---�������---\n";
	backup.show();
	cout << "---���� ����---\n";
	if (equals(se, backup)) cout << "�������� �ʾҽ��ϴ�." << endl;
	else cout << "�����Ͽ����ϴ�." << endl;
}