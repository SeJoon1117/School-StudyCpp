#include<iostream>
#include<string>
using namespace std;

int main() {
	string song("Falling in love with you");
	string singer("Elvis Presley");
	string ans;

	cout << song << "�� �θ� ������(��Ʈ : ù���ڴ� E) ? ";
	getline(cin, ans);
	if (ans == singer) {
		cout << "�¾ҽ��ϴ�.";
	}
	else {
		cout << "Ʋ�Ƚ��ϴ�." << singer << "�Դϴ�.";
	}

}