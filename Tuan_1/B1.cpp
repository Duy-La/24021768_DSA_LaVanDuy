#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;
    int a[1000];
    cout << "Nhap " << N << " phan tu:\n";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    long tong = 0;

    for (int i = 0; i < N; i++) {
        tong += a[i];
    }
    cout << "Tong cac phan tu trong day = " << tong << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N), o(1))
