#include<iostream>
using namespace std;

int main() {
	cout << "�̸���?";
	char name[100], address[100];
	int age;
	cin.getline(name, 100, '\n');
	cout << "�ּҴ�>";
	cin.getline(address, 100, '\n');
	cout << "���̴�?";
	cin >> age;
	cout << name << "," << address << "," << age;

}