#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NameCircle :public Circle {
	int radius;
	string name;
public:
	NameCircle(int radius = 0, string name = " ") {
		this->radius = radius;
		this->name = name;
	}
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

int main() {
	int radius = 0, big = 0;
	string name = " ", bigPizzaName;
	NameCircle pizza[5];
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}
	for (int i = 0; i < 5; i++) {
		if (big < pizza[i].getRadius()) {
			big = pizza[i].getRadius();
			bigPizzaName = pizza[i].getName();
		}
	}
	cout << "���� ������ ū ���ڴ� " << bigPizzaName << "�Դϴ�.";
}