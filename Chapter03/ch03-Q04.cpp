#include<iostream>
using namespace std;

class CoffeeMachine {
public:
	int C, W, S;
	CoffeeMachine(int a, int b, int c) { C = a, W = b, S = c; }
	int drinkEspresso();
	int drinkAmericano();
	int drinkSugarCoffee();
	void show();
	int fill();
};

int CoffeeMachine::drinkEspresso() {
	return C = C - 1, W = W - 1;
}
int CoffeeMachine::drinkAmericano() {
	return C = C - 1, W = W - 2;
}
int CoffeeMachine::drinkSugarCoffee() {
	return C = C - 1, W = W - 2, S = S - 1;
}
void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << C << "\t ��:" << W << "\t����:" << S << '\n';
}
int CoffeeMachine::fill() {
	return C = 10, W = 10, S = 10;
}
int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}