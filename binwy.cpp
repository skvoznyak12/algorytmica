#include <iostream>
using namespace std;

int main() {
    int l = 0;                           
    int p = 14;                          
    int szukana;                    
    int tablica[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    cout<< "Podaj liczbe"<<endl;
    cin>> szukana;
    while (l <= p) {
        int sr = (l + p) / 2;           

        if (tablica[sr] == szukana) {   
            cout << "Liczba " << szukana << " znajduje sie w indeksie: " << sr << endl;
            return 0;                    
        }
        else if (tablica[sr] > szukana) {
            p = sr - 1;                
        }
        else {
            l = sr + 1;                  
        }
    }
    
    cout << "Liczba " << szukana << " nie znajduje sie w tablicy." << endl;
    return 0;
}
