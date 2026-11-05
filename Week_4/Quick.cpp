#include <iostream>
#include <vector>

/*
 * Quick Sort (Sắp xếp nhanh)
 * 
 * Độ phức tạp thời gian (Time Complexity):
 * - Best Case: O(n log n)
 * - Average Case: O(n log n)
 * - Worst Case: O(n^2) (Xảy ra khi chọn Pivot không hợp lý, mảng đã được sắp xếp sẵn)
 * 
 * Độ phức tạp không gian (Space Complexity):
 * - Auxiliary Space: O(log n) (Chi phí bộ nhớ cho Call Stack đệ quy ở trường hợp trung bình)
 */

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Chọn phần tử cuối làm Pivot
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size() - 1);
    
    for (int x : arr) std::cout << x << " ";
    return 0;
}
