#include<iostream>
using namespace std;

class Tower {
public:
	int h;
	Tower() { h = 1; }
	Tower(int r) { h = r; }
	int getH();
};

int Tower::getH(){
	return h;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴�" << myTower.getH() << "����\n";
	cout << "���̴�" << seoulTower.getH() << "����\n";
}