#include <iostream>
using namespace std;
void input(int& a, int& b); // khai báo hàm nhập tham số a,b
int sum(int a, int b); // khai báo hàm tính tổng
void output(int kq); // khai báo hàm xuất 
void input(int& a, int& b) { // hàm nhập
	cin >> a >> b;
}
int sum(int a, int b) { //hàm tính tổng
	int s = a + b;
	return s;
}
void output(int kq) {  // hàm xuất
	cout << kq;
}
int main()
{
	int a, b;
	input(a, b); // gọi hàm nhập
	int kq = sum(a, b); 
	output(kq); //gọi hàm xuất
}