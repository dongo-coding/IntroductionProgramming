#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long S = 0;
	for (int i = 0;i <= n;i++) {
		string str_i = to_string(i);
		string double_i = str_i + str_i;
		S += stoi(double_i);
	}
	cout << S;
}