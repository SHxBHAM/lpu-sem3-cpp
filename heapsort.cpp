#include <iostream>
using namespace std;

void heapify(int a[], int n, int i) {
    int large = i;
    int l = 2 * i + 1; // left child index
    int r = 2 * i + 2; // right child index
    if (l < n && a[l] > a[large]) {
        large = l;
    }
    if (r < n && a[r] > a[large]) {
        large = r;
    }
    if (large != i) {
        swap(a[i], a[large]);
        heapify(a, n, large);
    }
}

void heapsort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--) { //comment out if want to convert into max heap sorting code :)
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    heapsort(a, n);

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
