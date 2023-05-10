#include<iostream>
using namespace std;

class Account {
public:
	char name[100];
	int IDnum, MONe;
	int deposit(int plus);
	int withdraw(int minus);
	int inquiry();
	int getOwner() { name[100]; }
	Account(char c[100], int a, int b) {
		char name[100] = char c[100],
	}
};

int Account::deposit(int plus) {
	MONe = MONe + plus;
}
int Account::withdraw(int minus) {
	MONe = MONe - minus;
}
int Account::inquiry() {
	MONe;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << '\n';
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << '\n';
}
