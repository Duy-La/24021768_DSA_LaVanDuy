#include <iostream>
#include <vector>

/*
 * Bubble Sort (Sắp xếp nổi bọt)
 * 
 * Độ phức tạp thời gian (Time Complexity):
 * - Best Case: O(n) (Tối ưu bằng biến swapped khi mảng đã sắp xếp)
 * - Average Case: O(n^2)
 * - Worst Case: O(n^2)
 * 
 * Độ phức tạp không gian (Space Complexity):
 * - Auxiliary Space: O(1)
 */

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Nếu không có phần tử nào bị đổi chỗ ở vòng lặp trong -> mảng đã sắp xếp xong
        if (!swapped) break;
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    
    for (int x : arr) std::cout << x << " ";
    return 0;
}
