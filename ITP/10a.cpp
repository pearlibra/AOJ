#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double ans;
    cin >> x1 >> y1 >> x2 >> y2;

    ans = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    printf("%.5f\n", ans);

    return 0;
}