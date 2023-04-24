#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";
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