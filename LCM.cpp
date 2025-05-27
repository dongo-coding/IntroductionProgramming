#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	long long ucln = gcd(a, b);
	long long bcnn = (a * b) / ucln;
	cout << bcnn;

}