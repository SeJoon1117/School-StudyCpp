#include<iostream>
#include<string>
using namespace std;

void msg(int id) {
	cout << id << endl;
}

void msg(int id, string s = "") {
	cout << id << ":" << s << endl;
}

int main() {
	msg(5, "Good Morning");
	//msg(6);	첫 번째, 두 번째 둘 다 관련 있어서 오류
}