#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;
    double a[1000];
    cout << "Nhap " << N << " so thuc:\n";
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    double tong = 0;
    for (int i = 0; i < N; i++) {
        tong += a[i];
    }
    double trungBinh = tong / N;
    cout << "Gia tri trung binh = " << trungBinh << endl;
    cout << "Cac gia tri lon hon hoac bang gia tri trung binh:\n";
    for (int i = 0; i < N; i++) {
        if (a[i] >= trungBinh) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N), o(1))
