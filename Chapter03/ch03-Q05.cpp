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
	cout << "-- 0 에서" << RAND_MAX << "까지의 랜덤 정수 10개--\n";
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << '\n\n' << "-- 2에서 4까지의 랜덤 정수 10개 --\n";
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}