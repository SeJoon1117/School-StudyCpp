#include<iostream>
#include<string>
using namespace std;

int main() {
	cout << "���ڿ� �Է� >>";
	string st;
	getline(cin, st, '\n');
	int len = st.size();
	int r = 0;
	for (int i = 0; i < len; i++) {
		if (st.at(i) == 'a'){
			r++;
		}
	}
	cout << "���� a�� " << r << "�� �ֽ��ϴ�." ;
}