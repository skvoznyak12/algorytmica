#include <iostream>

using namespace std;

int an(int a, int n) {
    int wynik = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            wynik *= a;
        }
        a *= a;
        n /= 2;
    }
    return wynik;
}

int main() {
    int a, n;
    cout << "baza (a): ";
    cin >> a;
    cout << "wykladnik (n): ";
    cin >> n;

    cout << a << "^" << n << " = " << an(a, n) << endl;
    return 0;
}
