#include <iostream>
using namespace std;

const int MAX = 1000;
void tinhTongMaTran(int a[][MAX], int n, int m) {
    long long tong = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tong += a[i][j];
        }
    }
    cout << "Tong cac phan tu cua ma tran = " << tong << endl;
}

int main() {
    int a[MAX][MAX], n, m;
    cout << "Nhap so dong n va so cot m: ";
    cin >> n >> m;
    if (n <= 0 || n > MAX || m <= 0 || m > MAX) {
        cout << "Kich thuoc ma tran khong hop le!\n";
        return 0;
    }
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    tinhTongMaTran(a, n, m);
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(NM), o(1))
