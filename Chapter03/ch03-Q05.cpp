#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Random {
public:
	int r;
	Random() { int r; }
	int next();
	int nextInRange(int a, int b);
};

int Random::next() {
	srand((unsigned)time(0));
	int n = rand();
	return r;
}
int Random::nextInRange(int a, int b) {
	int c = b - a;
	srand((unsigned)time(0));
	int n = rand();
	int r = n % c + c;
	return r;
}
int main() {
	Random r;
	cout << "-- 0 ����" << RAND_MAX << "������ ���� ���� 10��--\n";
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << '\n\n' << "-- 2���� 4������ ���� ���� 10�� --\n";
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}