#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�.\n";
	string s;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');
	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int index = s.find(f, startIndex);
		if (index == -1) break;
		s.replace(index, f.size(), r);
		startIndex = index + r.size();
	}
	cout << s << endl;
}