#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T isprime(T &x) {
    if (x == 2) {
        return true;
    }

    else if (x < 2 || x % 2 == 0) {
        return false;
    }

    int i = 3;
    while (i <= sqrt(x)) {
        if (x % i == 0) {
            return false;
        }
        i += 2;
    }

    return true;
}

int main() {
    int n, ans = 0;
    bool b;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b = isprime(a[i]);
        if (b) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}