#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n, count = 0;
    cin >> m >> n;

    int**matrix = new int* [m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    int* primes = new int[m * n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (isPrime(matrix[i][j])) {
                bool found = false;
                for (int k = 0; k < count; k++) {
                    if (primes[k] == matrix[i][j]) {
                        found = true;
                        break;
                    }
                }
                if (!found) primes[count++] = matrix[i][j];
            }
        }
    }

    if (count == 0) cout << 0;
    else if (count == 1) cout << 1;
    else {
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (primes[i] < primes[j]) swap(primes[i], primes[j]);
            }
        }
        cout << primes[1];
    }
    return 0;
}
