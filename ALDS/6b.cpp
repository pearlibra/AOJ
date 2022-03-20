#include <iostream>
using namespace std;

int partition(int A[], int p, int r);

int main() {
    int n, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pivot = partition(a, 0, n - 1);

    for (i = 0; i < n; i++) {
        if (i) {
            if (i != pivot) {
                cout << " " << a[i];
            }
            else {
                cout << " [" << a[i] << "]";
            }
        }
        else {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i = i + 1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}