#include <iostream>
#include <string>
using namespace std;

class card {
    public:
        char suit;
        int num;
};

int partition(card A[], int p, int r);
void quicksort(card A[], int p, int r);
void insertionSort(card A[], int n);

int main() {
    int n, i;
    int flag = 1;
    cin >> n;
    card a[n], b[n];

    for (i = 0; i < n; i++) {
        cin >> a[i].suit;
        cin >> a[i].num;
    }
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    quicksort(a, 0, n - 1);
    insertionSort(b, n);

    for (i = 0; i < n; i++) {
        if (a[i].suit != b[i].suit) {
            flag = 0;
            break;
        }
    }
    
    if (flag) {
        cout << "Stable" << endl;
    } 
    else {
        cout << "Not stable" << endl;
    }

    for (i = 0; i < n; i++) {
        cout << a[i].suit << " " << a[i].num << endl;
    }
    return 0;
}

int partition(card A[], int p, int r) {
    card x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j].num <= x.num) {
            i = i + 1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

void quicksort(card A[], int p, int r) {
    int q;
    if (p < r) {
        q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
    return;
}

void insertionSort(card A[], int n) {
    int i, j;
    card key;
    for (i = 1; i <= n-1; i++) {
        key = A[i];
        j = i - 1;  
        while (j >= 0 && A[j].num > key.num) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

