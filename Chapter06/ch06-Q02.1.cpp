#include<iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
	Person() {
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int a, string s) {
		id = a;
		weight = 20.5;
		name = s;
	}
	Person(int a, string s, double b) {
		id = a;
		weight = b;
		name = s;
	}
};

int main() {
	Person grace, ahhley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ahhley.show();
	helen.show();
}