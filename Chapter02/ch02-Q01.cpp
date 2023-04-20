#include<iostream>
using namespace std;

int main() {
	int i, r;
	for (i = 0; i < 10; i++) {
		for (r = 0; r < 10; r++) {
			cout << (1 + r) + i * 10 << "\t";
		}
		cout << '\n';
	}
}