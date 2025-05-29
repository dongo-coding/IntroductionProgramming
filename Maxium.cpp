#include <iostream>
using namespace std;
void input(int& a, int& b);
int maxium(int a, int b);
void output(int kq);
void input(int& a, int& b) {
	cin >> a >> b;
}
int maxium(int a, int b) {
	int max = a;
	if (max < b) {
		max = b;
	}
	return max;
}
void output(int maxium) {
	cout << maxium;
}
int main()
{
	int a, b;
	input(a, b);
	int kq = maxium(a, b);
	output(kq);
}