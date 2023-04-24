#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string address("¼­¿ï½Ã ¼ººÏ±¸ »ï¼±µ¿ 389");
	string addresscopy(address);

	char text[] = { 'L','O','V','E',' ','C','+','+','\n' };
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << addresscopy << endl;
	cout << title << endl;
}