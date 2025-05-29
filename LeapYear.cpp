#include <iostream>
using namespace std;
void input(int &a);
bool checkingLY(int a);
void output(bool kq);
void input(int& a) {
	cin >> a;
}
bool checkingLY(int a) {
	return ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
}
void output(bool kq) {
	if (!kq) {
		cout << "KHONGNHUAN";
	}
	else cout << "NHUAN";
}
int main()
{
	int a;
	input(a);
	bool kq = checkingLY(a);
	output(kq);

	

}