#include <iostream>
using namespace std;

void f1(int n) {
    int k = 2; // 
    cout << "Czynniki pierwsze liczby " << n << ": ";
    
    while (n > 1) {
        while (n % k == 0) { 
            cout << k << " "; 
            n /= k;          
        }
        k++; 
    }
    
    cout << endl;
}

int main() {
    int n;

    cout << "Podaj liczbe do rozkladu na czynniki pierwsze: ";
    cin >> n;

    if (n < 2) {
        cout << "Liczba musi być większa lub równa 2." << endl;
    } else {
        f1(n);
    }

    return 0;
}
