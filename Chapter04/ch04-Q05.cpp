#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	cout << "�Ʒ��� �� �� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";
	string s;
	srand((unsigned)time(0));
	while (true) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s.compare("exit") == 0) {
			break;
		}
		int len = size(s);
		int r = rand() % len;
		s.at(r) = s.at(r) + 1; //�ƽ�Ű�ڵ带 �̿��ϸ� ���ڷε� �ٲ�� ����
		cout << s << endl;
	}
}