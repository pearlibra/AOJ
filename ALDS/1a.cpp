#include <iostream>
using namespace std;

void insertionSort(int a[], int i) {
    int j, v;
    v = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > v) {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = v;
}

int main() {
    int n, i, j;
    cin >> n;
    int a[n];

    for (i=0; i<n; i++) {
        cin >> a[i];
    }
    for (i=0; i<n; i++) {
        insertionSort(a, i);
        for (j=0; j<n; j++) {
            printf("%d", a[j]);
            if (j==n-1) break;
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}