#include <iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void sortAscending(int a[], int size) {
	for (int i = 0;i < size - 1;i++) {
		for (int j = i + 1;j < size;j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
void sortDescending(int a[], int size) {
	for (int i = 0;i < size-1;i++) {
		for (int j = i + 1;j < size;j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int a[1000], even[1000], odd[1000];
	int evenCount = 0, oddCount = 0;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) even[evenCount++] = a[i];
		else odd[oddCount++] = a[i];
	}
	sortAscending(even, evenCount);
	sortDescending(odd, oddCount);

	int evenIndex = 0, oddIndex = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] % 2 == 0) cout << even[evenIndex++] << " ";
		else cout << odd[oddIndex++] << " ";
	}
}