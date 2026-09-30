#include <iostream>
using namespace std;

void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int a[1000], n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    if (n <= 0 || n > 1000) {
        cout << "So phan tu khong hop le!\n";
        return 0;
    }
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sapXepTangDan(a, n);
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N^2), o(1))
