#include <iostream>
using namespace std;

int main() {
    int n, u, k, v;
    cin >> n;
    int m[n+1][n+1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 1; j <= k; j++) {
            cin >> v;
            m[u][v] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n) {
                cout << m[i][j] << endl;
                break;
            }
            cout << m[i][j] << " ";
        }
    }
    return 0;
}

