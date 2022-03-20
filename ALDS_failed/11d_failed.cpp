#include <iostream>
#include <string>

using namespace std;

int confirm_connection(int start, int end, int *m, int n, int a[]);

int main() {
    int n, e, q;
    int s, t;
    cin >> n >> e;
    int a[n];
    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < e; i++) {
        cin >> s >> t;
        m[s][t] = 1;
        m[t][s] = 1;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (confirm_connection(s, t, &m[0][0], n, a)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
        for (int j = 0; j < n; j++) {
            a[j] = 0;
        }

    }

    return 0;
}

int confirm_connection(int start, int end, int *m, int n, int a[]) {
    int res = 0;

    for (int i = 0; i < n; i++) {
        if (*(m + n*start + end) == 1) {
            return 1;
        }
        if (*(m + n*start + i) == 1 && a[i] == 0) {
            a[i] = 1;
            res = max(res, confirm_connection(i, end, m, n, a));
        }
    }
    return res;
}