#include<iostream>
using namespace std;

class Add {
public:
	int a, b, ans;
	void setValue(int x, int y) {
		a = x, b = y;
	}
	int calculate() {
		ans = a + b;
		return ans;
	}
};
class Sub {
public:
	int a, b, ans;
	void setValue(int x, int y) {
		a = x, b = y;
	}
	int calculate() {
		ans = a - b;
		return ans;
	}
};
class Mul {
public:
	int a, b, ans;
	void setValue(int x, int y) {
		a = x, b = y;
	}
	int calculate() {
		ans = a * b;
		return ans;
	}
};
class Div {
public:
	int a, b, ans;
	void setValue(int x, int y) {
		a = x, b = y;
	}
	int calculate() {
		ans = a / b;
		return ans;
	}
};

int main() {
	Add A;
	Sub S;
	Mul M;
	Div D;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		int a, b;
		char ch;
		cin >> a >> b >> ch;
		if (ch == '+') {
			A.setValue(a, b);
			A.calculate();
			cout << A.ans << '\n';
		}
		if (ch == '-') {
			S.setValue(a, b);
			S.calculate();
			cout << S.ans << '\n';
		}
		if (ch == '*') {
			M.setValue(a, b);
			M.calculate();
			cout << M.ans << '\n';
		}
		if (ch == '/') {
			D.setValue(a, b);
			D.calculate();
			cout << D.ans << '\n';
		}
	}
}