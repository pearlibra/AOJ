#include<iostream>
using namespace std;

int main() {
    int i, x;
    int a[10000];
    i = 0;
    
    do {
        cin >> x;
        a[i] = x;
        i++;
    } while(x != 0);

    i = 0;

    while (a[i] != 0) {
        cout << "Case " << i+1 << ": " << a[i] << endl;
        i++;
        }
    return 0;
}