#include <iostream>
#include <utility>
using namespace std;

int main() {
    int n, count, i, j, minj;
    cin >> n;
    int a[n];
    
    for (i=0; i<n; i++) {
        cin >> a[i];
    }

    for (i=0; i<n; i++) {
        minj = i;
        for (j=i; j<n; j++) {
            if (a[j] < a[minj]) {
                minj = j;
            }
        }
        swap(a[i], a[minj]);
        if (i != minj) count++;
    }

    for (i=0; i<n; i++) {
        if (i == n-1) {
            cout << a[i] << endl;
        } else {
            cout << a[i] << ' ';
        }
    }
    cout << count << endl;
    return 0;
}