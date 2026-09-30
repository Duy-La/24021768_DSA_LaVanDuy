#include <iostream>
using namespace std;

const int MAX = 1000;
void xoaDong(int a[][MAX], int &n, int m, int i) {
    if (i < 0 || i >= n) {
        cout << "Vi tri dong can xoa khong hop le!\n";
        return;
    }
    for (int dong = i; dong < n - 1; dong++) {
        for (int cot = 0; cot < m; cot++) {
            a[dong][cot] = a[dong + 1][cot];
        }
    }
    n--;
}

int main() {
    int a[MAX][MAX], n, m, i;
    cout << "Nhap so dong n va so cot m: ";
    cin >> n >> m;
    if (n <= 0 || n > MAX || m <= 0 || m > MAX) {
        cout << "Kich thuoc ma tran khong hop le!\n";
        return 0;
    }
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int dong = 0; dong < n; dong++) {
        for (int cot = 0; cot < m; cot++) {
            cin >> a[dong][cot];
        }
    }
    cout << "Nhap chi so dong can xoa (bat dau tu 0): ";
    cin >> i;
    xoaDong(a, n, m, i);
    cout << "Ma tran sau khi xoa dong:\n";
    for (int dong = 0; dong < n; dong++) {
        for (int cot = 0; cot < m; cot++) {
            cout << a[dong][cot] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o((N-i-1)M), o(1))
