#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. ��ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�)\n";
	getline(cin, s, '\n');
	int len = s.size();
	
	for (int i = 0; i < len; i++) {
		string start = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + start;
		cout << s << endl;
	}
}