#include<iostream>
using namespace std;
int sums(int a, int b);

int main() {
	cout << "끝 수를 입력하세요>>";
	int num;
	cin >> num;
	cout << "1에서 " << num << "까지의 합은" << sums(1, num);
}

int sums(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum = i + sum;
	}
	return sum;
}