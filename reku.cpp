#include <iostream>
using namespace std;

int CalculatePowerRecursive(int baza, int wykladnik) {
    if (wykladnik == 0) {
        return 1; 
    } else {
        return baza * CalculatePowerRecursive(baza, wykladnik - 1); 
    }
}

void DisplayResult(int a) {
    cout << "Wynik potegowania: " << a << endl;
}

int main() {
    int baza, wykladnik;

    cout << "Podaj liczbe podstawowa: ";
    cin >> baza;
    cout << "Podaj wykladnik: ";
    cin >> wykladnik;

    int a = CalculatePowerRecursive(baza, wykladnik);

    DisplayResult(a);

    return 0;
}
