#include<iostream>
#include<string>
using namespace std;

class Integer {
public:
	string s;
	int i;
	Integer() { i = 0; }
	Integer(int num) {
		i = num;
	}
	Integer(string s) {
		i = stoi(s);
	}
	int get() {
		return i;
	}
	int set(int n) {
		return i = n;
	}
	int isEven = true;
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven;
}