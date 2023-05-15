#include<iostream>
using namespace std;

void cobine(string &a, string &b, string &c) {
	c = a + ' ' + b;
}

int main() {
	string text1("I love you"), text2("very much");
	string text3;
	cobine(text1, text2, text3);
	cout << text3;
}