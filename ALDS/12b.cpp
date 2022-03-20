#include <iostream>
#define MAX 100
#define INF 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];

using namespace std;

void dijkstra() {
    int minv;
    int d[MAX], p[MAX], color[MAX];

    for (int i = 0; i < n; i++) {
        d[i] = INF;
        color[i] = WHITE;
    }

    d[0] = 0;
    color[0] = GRAY;
    while(true) {
        minv = INF;
        int u = -1;
        for (int i = 0; i < n; i++) {
            if (minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }
        if (u == -1) break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++) {
            if (color[v] != BLACK && M[u][v] != INF) {
                if (d[v] > d[u] + M[u][v]) {
                    d[v] = d[u] + M[u][v];
                    color[v] = GRAY;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
    }
}

int main () {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = INF;
        }
    }

    int k, c, u, v;
    for (int i = 0; i < n; i++) {
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }

    dijkstra();

    return 0;
}
