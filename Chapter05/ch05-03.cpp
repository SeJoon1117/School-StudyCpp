#include<iostream>
using namespace std;

int main() {
	cout << 'i' << '\t' << 'n' << '\t' << "refn" << '\n';
	int i = 1;
	int n = 2;
	int &refn = n;
	n = 4;
	refn++;
	cout << i << '\t' << n << '\t' << refn << '\n';
	
	refn = i;
	refn++;
	cout << i << '\t' << n << '\t' << refn << '\n';

	int* p = &refn;
	*p = 20;
	cout << i << '\t' << n << '\t' << refn << '\n';

}