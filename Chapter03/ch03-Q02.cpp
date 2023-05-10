#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	string Y, M, D;
	int getYear, getMonth, getDay;
	Date(int a, int b, int c);
	Date(string s);
	void show();
};

Date::Date(int a, int b, int c) {
	getYear = a, getMonth = b, getDay = c;
}

Date::Date(string s) {
	int x = stoi(Y);
	int y = stoi(M);
	int z = stoi(D);
}

void Date::show() {
	 cout << Y << "년" << M << "월" << D << "일";
	
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear << ',' << birth.getMonth << ',' << birth.getDay << '\n';
}
