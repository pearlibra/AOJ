#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x, y, a, b, c;
    cin >> x >> y;
    a = max(x, y);
    b = min(x, y);
    while (a % b != 0) {
        c = b;
        b = a % b;
        a = c;
    }
    cout << b << endl;
    return 0;
}