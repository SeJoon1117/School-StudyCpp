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
	cout << "높이는 " << myTower.getH() << "미터\n";
	cout << "높이는 " << seoulTower.getH() << "미터\n";
}
