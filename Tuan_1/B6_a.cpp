#include <iostream>
using namespace std;
void xoaPhanTu(int a[], int &n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri xoa khong hop le!\n";
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

int main() {
    int a[1000], n, k;

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
    cout << "Nhap vi tri k can xoa (bat dau tu 0): ";
    cin >> k;
    xoaPhanTu(a, n, k);
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N), o(1))
