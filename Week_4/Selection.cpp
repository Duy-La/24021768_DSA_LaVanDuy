#include <iostream>
#include <vector>

/*
 * Selection Sort (Sắp xếp chọn)
 * 
 * Độ phức tạp thời gian (Time Complexity):
 * - Best Case: O(n^2)
 * - Average Case: O(n^2)
 * - Worst Case: O(n^2)
 * 
 * Độ phức tạp không gian (Space Complexity):
 * - Auxiliary Space: O(1)
 */

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);
    
    for (int x : arr) std::cout << x << " ";
    return 0;
}
