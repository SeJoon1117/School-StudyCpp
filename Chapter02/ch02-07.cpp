#include<iostream>
#include<string>
using namespace std;

int main() {
	string song("Falling in love with you");
	string singer("Elvis Presley");
	string ans;

	cout << song << "를 부른 가수는(힌트 : 첫글자는 E) ? ";
	getline(cin, ans);
	if (ans == singer) {
		cout << "맞았습니다.";
	}
	else {
		cout << "틀렸습니다." << singer << "입니다.";
	}

}