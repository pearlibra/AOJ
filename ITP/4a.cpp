#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, f;
    int d, r;

    cin >> a >> b;
    d = a / b;
    r = (int)a % (int)b;
    f = a / b;

    cout << d << " " << r << " " << fixed << setprecision(6) << f << endl;

    return 0;
}