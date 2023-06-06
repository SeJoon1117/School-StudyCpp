#include<iostream>
using namespace std;

int main() {
	cout << "에스프레소 2000원 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	char coffee[100];
	int num, money = 0;
	for (money = 0; money < 20000;) {
		cout << "주문>>";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			cout << num * 2000 << "원입니다. 맛있게 드세요\n";
			money = money + num * 2000;
		}
		if (strcmp(coffee, "아메리카노") == 0) {
			cout << num * 2300 << "원입니다. 맛있게 드세요\n";
			money = money + num * 2300;
		}
		if (strcmp(coffee, "카푸치노") == 0) {
			cout << num * 2500 << "원입니다. 맛있게 드세요\n";
			money = money + num * 2500;
		}
	}
	cout << "오늘 " << money << "원을 판매하여 카페를 닫습니다. 내일 봐요~";
}
