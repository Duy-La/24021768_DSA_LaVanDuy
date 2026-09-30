#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return (n) * factorial(n - 1);
}
int main() {
    int n;
    cout << "Nhap n (0 <= n <= 20): ";
    cin >> n;

    if (n > 20) {
        cout << "Loi tran so.\n";
        return 0;
    }
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
// Do phuc tap cua thuat toan la (time,memory) = (o(N), o(N))
