#include <iostream>
#include <string>
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
    int i = 1;
    int a[2000001];
    string operation;

    while (cin >> operation) {
        if (operation == "end") break;
        else if (operation == "insert") {
            cin >> a[i];
            build_max_heap(a, i);
            i++;
        }
        else if(operation == "extract") {
            cout << a[1] << endl;
            a[1] = a[i-1];
            i--;
            build_max_heap(a, i-1);
        }
    }
    return 0;
}