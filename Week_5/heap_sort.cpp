#include <iostream>
#include <algorithm>

using namespace std;

// 1. Thêm phần tử - Best: O(1), Average/Worst: O(logN)
void swim(int *a, int k) { 
    while (k > 1 && a[k / 2] < a[k]) { // Min-Heap: a[k/2] > a[k]
        swap(a[k / 2], a[k]);
        k = k / 2;
    }
}

void insert(int *a, int &n, int x) {
    n++;
    a[n] = x;
    swim(a, n);
}

// 2. Xóa phần tử - Best: O(1), Average/Worst: O(logN)
void sink(int *a, int n, int k) {
    while (2 * k <= n) {
        int j = 2 * k; 
        if (j < n && a[j] < a[j + 1]) j++; // Min-Heap: a[j] > a[j + 1]
        if (a[k] >= a[j]) break;           // Min-Heap: a[k] <= a[j]
        swap(a[k], a[j]);
        k = j;
    }
}

int delMax(int *a, int &n) {
    if (n == 0) return -1; // Chặn trường hợp Heap rỗng
    int maxVal = a[1];
    swap(a[1], a[n]);
    n--;
    sink(a, n, 1);
    return maxVal;
}

// 3. Heap Sort - O(NlogN)
void heapSort(int *a, int n) { 
    // Xây dựng Max-Heap từ mảng ban đầu (từ n/2 về 1) - O(N)
    for (int k = n / 2; k >= 1; k--) {
        sink(a, n, k);
    }
    // Lần lượt đẩy phần tử max về cuối mảng - O(NlogN)
    while (n > 1) {
        swap(a[1], a[n]); 
        n--;              
        sink(a, n, 1);   
    }
}

int main() {
    // Test Max-Heap (1-indexed)
    int heap[100];
    int n = 0;

    insert(heap, n, 15);
    insert(heap, n, 40);
    insert(heap, n, 30);
    insert(heap, n, 10);

    cout << "Max: " << delMax(heap, n) << "\n"; // 40
    cout << "Next Max: " << delMax(heap, n) << "\n"; // 30

    // Test Heap Sort (mảng bắt đầu từ index 1)
    int arr[] = {0, 20, 5, 15, 40, 10, 35}; // index 0 bỏ trống
    int m = 6;

    heapSort(arr, m);

    cout << "Sorted: ";
    for (int i = 1; i <= m; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

