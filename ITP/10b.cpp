#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double a, b, C;
    double C_rad;
    double S, L, h;

    cin >> a >> b >> C;

    C_rad = C / 180 * M_PI;

    S = a * b * sin(C_rad) / 2;
    L = a + b + sqrt(a*a + b*b - 2*a*b*cos(C_rad));
    h = 2*S / a;

    printf("%.5f\n", S);
    printf("%.5f\n", L);
    printf("%.5f\n", h);

    return 0;
}