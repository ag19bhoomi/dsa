#include <iostream>
using namespace std;

int modularexp(int x, int n, int m) {
    int res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (1LL * res * x) % m;
        }
        x = (1LL * x % m * x % m) % m;
        n = n >> 1;
    }
    return res;
}

int main() {
    int x, n, m;

    // Example input
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;

    int result = modularexp(x, n, m);
    cout << x << "^" << n << " % " << m << " = " << result << endl;

    return 0;
}
