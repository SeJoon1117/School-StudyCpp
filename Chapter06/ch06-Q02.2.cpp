#include<iostream>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }

	Person(int a = 1, string s = "Grace", double b = 20.5) {
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