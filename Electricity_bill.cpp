#include <iostream>
using namespace std;
int main()
{
	int x, a, b, c, d;
	cin >> x >> a >> b >> c >> d;
	int cost = 0;
	if (x > 151) {
		cost += (x - 150) * d;
		x = 150;
	}
	if (x > 100) {
		cost += (x - 100) * c;
		x = 100;
	}
	if (x > 50) {
		cost += (x - 50) * b;
		x = 50;
	}
	if (x > 0) {
		cost += x * a;
	}
	cout << cost << endl;
}
