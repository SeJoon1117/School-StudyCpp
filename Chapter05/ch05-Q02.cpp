#include<iostream>
using namespace std;

double half(double& n) {
	n = n / 2;
	return n;
}

int main() {
	double n = 20;
	half(n);
	cout << n;
}