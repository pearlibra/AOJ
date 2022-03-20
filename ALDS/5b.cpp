#include <iostream>
#include <cmath>

void merge(int A[], int left, int mid, int right);
void merge_sort(int A[], int left, int right);

int count;

int main() {
    count = 0;
    int n; 
    std::cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    merge_sort(a, 0, n);
    for (int i=0; i<n; i++) {
        if (i) {
            std::cout << " ";
        }
        std::cout << a[i];
    }
    std::cout << std::endl;
    std::cout << count << std::endl;

    return 0;
}

void merge (int A[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1 + 1];
    int R[n2 + 1];
    for (int i=0; i<n1; i++) {
        L[i] = A[left + i];
    }
    for (int i=0; i<n2; i++) {
        R[i] = A[mid + i];
    }
    L[n1] = pow(10, 9) + 1;
    R[n2] = pow(10, 9) + 1;
    int i = 0;
    int j = 0;
    for (int k=left; k<right; k++) {
        count += 1;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i += 1;
        }
        else {
            A[k] = R[j];
            j += 1;
        }
    }
}

void merge_sort(int A[], int left, int right){
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        merge_sort(A, left, mid);
        merge_sort(A, mid, right);
        merge(A, left, mid, right);
    }
}
