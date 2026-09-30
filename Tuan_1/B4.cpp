#include <iostream>
#include <cstdlib>
using namespace std;

void rutGonPhanSo(int &a, int &b) {
    int x = abs(a);
    int y = abs(b);
    int ucln = 1;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    ucln = x;
    if (ucln != 0) {
        a /= ucln;
        b /= ucln;
    }
    if (b < 0) {
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cout << "Nhap tu so a: ";
    cin >> a;
    cout << "Nhap mau so b: ";
    cin >> b;
    if (b == 0) {
        cout << "Mau so phai khac 0!\n";
        return 0;
    }
    rutGonPhanSo(a, b);
    cout << "Phan so toi gian: " << a << "/" << b << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(log(min(|a|,|b|))), o(1))
