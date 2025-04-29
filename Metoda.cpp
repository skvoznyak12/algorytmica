#include <iostream>
using namespace std;

float f(float x) {
    return x * (x * (x - 3) + 2) - 6;
}

int main() {
    float a = -10, b = 10;
    float epsilon = 0.00001;
    float srodek;

    if (f(a) == 0.0) {
        cout << "Miejsce zerowe: " << a << endl;
        return 0;
    }
    if (f(b) == 0.0) {
        cout << "Miejsce zerowe: " << b << endl;
        return 0;
    }

    while ((b - a) > epsilon) {
        srodek = (a + b) / 2;
        if (f(srodek) == 0.0) {
            break;
        }
        if (f(a) * f(srodek) < 0) {
            b = srodek;
        } else {
            a = srodek;
        }
    }

    cout.precision(5);
    cout << fixed;
    cout << "Miejsce zerowe: " << (a + b) / 2 << endl;

    return 0;
}
