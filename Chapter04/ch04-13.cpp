#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "아래에 문자열을 입력하세요. 빈칸이 있어도 됩니다.(한글 안됨)\n";
	getline(cin, s, '\n');
	int len = s.size();
	
	for (int i = 0; i < len; i++) {
		string start = s.substr(0, 1);
		string sub = s.substr(1, len - 1);
		s = sub + start;
		cout << s << endl;
	}
}