#include <iostream>
using namespace std;

void max_heapify(int a[], int i, int H) {
    int largest, l, r;
    l = 2 * i;
    r = 2*i + 1;
    if (l <= H && a[l] > a[i]) largest = l;
    else largest = i;

    if (r <= H && a[r] > a[largest]) largest = r;

    if (largest != i) {
        swap(a[i], a[largest]);
        max_heapify(a, largest, H);
    }
}

void build_max_heap(int a[], int H) {
    int i;
    for (i = H / 2; i > 0; i--) {
        max_heapify(a, i, H);
    }
}


int main() {
    int H, i;
    cin >> H;
    int a[H+1];

    for (i = 1; i < H+1; i++) {
        cin >> a[i];
    }

    build_max_heap(a, H);

    for (i = 1; i < H+1; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    
    return 0;
}