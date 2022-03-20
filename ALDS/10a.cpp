#include <iostream>
using namespace std;

int main() {
    int fib[45];
    int n;
    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < 45; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    cin >> n;
    cout << fib[n] << endl;

    return 0;
}