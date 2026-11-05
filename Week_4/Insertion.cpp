#include <iostream>
#include <vector>

/*
 * Insertion Sort (Sắp xếp chèn)
 * 
 * Độ phức tạp thời gian (Time Complexity):
 * - Best Case: O(n) (Mảng đã được sắp xếp sẵn)
 * - Average Case: O(n^2)
 * - Worst Case: O(n^2) (Mảng ngược chiều)
 * 
 * Độ phức tạp không gian (Space Complexity):
 * - Auxiliary Space: O(1)
 */

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        // Dịch chuyển các phần tử lớn hơn key sang phải 1 vị trí
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};
    insertionSort(arr);
    
    for (int x : arr) std::cout << x << " ";
    return 0;
}
