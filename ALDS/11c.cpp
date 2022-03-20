#include <iostream>
using namespace std;

int table[100][2];

void BFS(int *m, int v, int n, int c) {
    if (c == 0) table[v-1][1] = 0;

    c++;
    for (int i = 0; i < n; i++) {
        if (*(m + (n*(v-1) + i)) == 1 && (table[i][1] < 0 || table[i][1] > c)) {
            table[i][1] = c;
            BFS(m, i+1, n, c);
        }
    }
}

int main() {
    int n, u, k, v;
    cin >> n;
    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                table[i][j] = i + 1;
            }
            else {
                table[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 1; j <= k; j++) {
            cin >> v;
            m[u-1][v-1] = 1;
        }
    }

    BFS(&m[0][0], 1, n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 1) {
                cout << table[i][j] << endl;
                break;
            }
            cout << table[i][j] << " ";
        }
    }
    return 0;
}

