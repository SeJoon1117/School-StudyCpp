#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";
	string s;
	while (true) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s.compare("exit") == 0) {
			break;
		}
		int len = s.size();
		for (int i = 0; i <= len; i++) {
			cout << s.at(len - i);
		}
	}
}