#include <iostream>
using namespace std;

const int MAX = 1000;
void chenPhanTu(int a[], int &n, int y, int m) {
    if (n >= MAX) {
        cout << "Mang da day, khong the chen!\n";
        return;
    }
    if (m < 0 || m > n) {
        cout << "Vi tri chen khong hop le!\n";
        return;
    }
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }
    a[m] = y;
    n++;
}

int main() {
    int a[MAX], n, y, m;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    if (n < 0 || n >= MAX) {
        cout << "So phan tu khong hop le (can 0 <= n < " << MAX << ")!\n";
        return 0;
    }
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Nhap gia tri y can chen: ";
    cin >> y;
    cout << "Nhap vi tri m can chen (bat dau tu 0, m = n de chen cuoi): ";
    cin >> m;
    chenPhanTu(a, n, y, m);
    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N), o(1))
