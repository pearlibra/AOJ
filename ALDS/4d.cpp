#include <iostream>
using namespace std;

const int MAX = 100000;
int n, k;
long long t[MAX];

int check(long long P);
int solve();

int main() {
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> t[i];
    }
    long long ans  = solve();
    cout << ans << endl;

    return 0;
}

int check(long long P) {
    int i = 0;
    for (int j = 0; j < k; j++) {
        long long s = 0;
        while (s + t[i] <= P) {
            s += t[i];
            i++;
            if (i == n) return n;
        }
    }
    return i;
}

int solve() {
    long long left = 0;
    long long right = 100000 * 10000;
    long long mid;
    while (right - left > 1) {
        mid = (left + right) / 2;
        int v = check(mid);
        if (v >= n) right = mid;
        else left = mid;
    }
    return right;
}