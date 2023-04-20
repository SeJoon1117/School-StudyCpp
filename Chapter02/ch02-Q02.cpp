#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) {
		for (int r = 1; r < 10; r++) {
			cout << i << "x" << r << "=" << i * r << '\t';
		}
		cout << '\n';
	}
}