#include<iostream>
using namespace std;

class Ractangle {
public:
	int x, y;
	Ractangle() { x = 1, y = 1; }
	Ractangle(int len) { x = y = len; }
	Ractangle(int a, int b) { x = a, y = b; }
	bool isSquare();
};

bool Ractangle::isSquare() {
	if (x == y) return true;
	else return false;
}

int main() {
	Ractangle rect1;
	Ractangle rect2(3,5);
	Ractangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�.\n";
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�.\n";
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�.\n";

}