#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string address("서울시 성북구 삼선동 389");
	string addresscopy(address);

	char text[] = { 'L','O','V','E',' ','C','+','+','\n' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << addresscopy << endl;
	cout << title << endl;
}
