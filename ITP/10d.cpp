#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    double n, a, ans, p, ma;
    int i;
    double x[100], y[100];

    ma = 0;

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> x[i];
    }
    for (i=0; i<n; i++) {
        cin >> y[i];
    }
    for (i=0; i<n; i++) {
        ma = max(ma, abs(x[i] - y[i]));
    }


    for (p=1; p<=3; p++) {
        a = 0;
        for (i=0; i<n; i++) {
            a += pow(abs(x[i] - y[i]), p);
        }
        ans = pow(a, 1/p);

        printf("%.6f\n", ans);
    }
    printf("%.6f\n", ma);
    return 0;
}
