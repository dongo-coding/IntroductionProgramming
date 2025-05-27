#include <iostream>
#include <iomanip>
using namespace std;
void input(float& a, float& b);
int para(float a, float b);
void output(float kq);
void input(float& a, float& b) {
	cin >> a >> b;
}
int para(float a, float b) {
	int c = 2 * (a + b);
	return c;
}
void output(float kq) {
	cout << fixed << setprecision(2) << kq;
}
int main()
{
	float a, b;
	input(a, b);
	float kq = para(a, b);
	output(kq);
}