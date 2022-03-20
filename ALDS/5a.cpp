#include <iostream>
using namespace std;

bool solve(int i, int M, int A[], int len) {
    if (M == 0) {
        return true;
    }
    else if (M < 0) {
        return false; 
    }
    if (i >= len) {
        return false;
    }
    bool res = solve(i + 1, M, A, len) || solve(i + 1, M - A[i], A, len);
    return res;
}

int main() {
    int n, q, i;

    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> q;
    int m[q];
    for (i = 0; i < q; i++) {
        cin >> m[i];
    }

    for (i = 0; i < q; i++) {
        if (solve(0, m[i], a, sizeof(a) / sizeof(a[0]))) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    return 0;
}