#include<iostream>
using namespace std;

int main() {
	cout << "이름은?";
	char name[100], address[100];
	int age;
	cin.getline(name, 100, '\n');
	cout << "주소는?";
	cin.getline(address, 100, '\n');
	cout << "나이는?";
	cin >> age;
	cout << name << "," << address << "," << age;

}
