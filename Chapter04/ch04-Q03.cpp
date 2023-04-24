#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "문자열 입력 >>";
	string st;
	getline(cin, st, '\n');
	int len = st.size();
	int r = 0;
	for (int i = 0; i < len; i++) {
		if (st.at(i) == 'a'){
			r++;
		}
	}
	cout << "문자 a는 " << r << "개 있습니다." ;
}