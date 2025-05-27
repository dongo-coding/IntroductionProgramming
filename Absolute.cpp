#include <iostream>
#include <cmath>
using namespace std;
void input(int&n); //khai bao ham nhap
int absolute(int n); // khai bao ham tinh tri tuyet doi
void output(int kq); //khai bao ham xuat
void input(int &n) { // ham nhap
	cin >> n;
}
int absolute(int n) { //ham tinh tri tuyet doi
	if (n < 0) {
		n = -n;
	}
	return n;
}
void output(int kq) { //ham xuat
	cout << kq;
}
int main()
{
	int n;
	input(n); //goi ham nhap
	int kq = absolute(n);
	output(kq); // goi ham xuat
}
