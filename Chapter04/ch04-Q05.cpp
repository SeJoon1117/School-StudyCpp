#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	cout << "아래에 한 줄 입력하세요.(exit를 입력하면 종료합니다.)\n";
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
		s.at(r) = s.at(r) + 1; //아스키코드를 이용하면 문자로도 바뀔수 있음
		cout << s << endl;
	}
}