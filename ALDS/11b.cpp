#include <iostream>
using namespace std;

int table[100][3];
int t = 0;

void DFS(int *a, int n, int v) {
    if (table[v-1][1] > 0) {
        return;
    }
    else {
        t++;
        table[v-1][1] = t;
        for (int j = 0; j < n; j++) {
            if (*(a + (n*(v-1) + j)) == 1) {
                DFS(a, n, j+1);
            }
        }
        t++;
        table[v-1][2] = t;
    }
}

int main() {
    int n, u, k, v, i;
    cin >> n;
    int m[n][n];

    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = 0;
        }
    }

    for (i = 0; i < 100; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                table[i][j] = i + 1;
            }
            else {
                table[i][j] = 0;
            }
        }
    }

    for (i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j <= k-1; j++) {
            cin >> v;
            m[u-1][v-1] = 1;
        }
    }

    for (i = 0; i < n; i++) {
        if (table[i][1] == 0) DFS(&m[0][0], n, i+1);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2) {
                cout << table[i][j] << endl;
                break;
            }
            cout << table[i][j] << " ";
        }
    }
    return 0;
}