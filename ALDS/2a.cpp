#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n, count, flag, j;
    cin >> n;
    int a[n];

    for (j=0; j<n; j++) {
        cin >> a[j];
    }
    
    flag  = 1;
    count = 0;
    while (flag) {
        flag = 0;
        for (j=n-1; j>=1; j--) {
            if (a[j] < a[j-1]) {
                swap(a[j], a[j-1]);
                count++;
                flag = 1;
            }
        }
    }
    for (j=0; j<n; j++) {
        if (j==n-1) {
            cout << a[j] << endl;
        } else {
            cout << a[j] << ' ';
        }
    }
    cout << count << endl;
    return 0;
}