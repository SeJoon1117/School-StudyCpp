#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���.\n";
	string str;
	getline(cin, str, '\n');
	int sum = 0, startIndex = 0;
	while (true) {
		int findex = str.find('+', startIndex);
		if (findex == -1) {
			string part = str.substr(startIndex);
			if (part == "")break;
			cout << part << endl;
			sum = sum + stoi(part);
			break;
		}
		int count = findex - startIndex;
		string part = str.substr(startIndex, count);

		cout << part << endl;
		sum = sum + stoi(part);
		startIndex = findex + 1;
	}
	cout << "���ڵ��� ����" << sum;
}