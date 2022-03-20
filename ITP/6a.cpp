#include<iostream>
using namespace std;

int main() {
    int n;
    int a[100];
    int i;

    cin >> n;
    for(i=0; i<n; i++) {
        cin >> a[i];
    }

    for(i=0; i<n; i++) {
        cout << a[n-i-1];
        if (i == n-1) break;
        cout << " ";
    }
    cout << '\n';
    return 0;
}
