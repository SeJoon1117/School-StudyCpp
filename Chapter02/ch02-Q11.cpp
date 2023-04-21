#include<iostream>
using namespace std;

int main() {
	cout << "끝 수를 입력하세요>>";
	int num, sum = 0;
	cin >> num;
	for (int i = 0; i <= num; i++) {
		sum = i + sum;
	}
	cout << "1에서 " << num << "까지의 합은" << sum << "입니다.";
}