#include <iostream>
using namespace std;

const int MAX = 100; 

void merge(int tab[], int l, int m, int r) {
    int i = l, j = m + 1, k = 0;
    int temp[MAX]; 

    while (i <= m && j <= r) {
        if (tab[i] < tab[j])
            temp[k++] = tab[i++];
        else
            temp[k++] = tab[j++];
    }

    while (i <= m)
        temp[k++] = tab[i++];

    while (j <= r)
        temp[k++] = tab[j++];

    for (int x = 0; x < k; x++)
        tab[l + x] = temp[x];
}

void mergeSort(int tab[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(tab, l, m);
        mergeSort(tab, m + 1, r);
        merge(tab, l, m, r);
    }
}

int main() {
    int tab[MAX], n;

    cout << "Ile liczb chcesz posortowac? ";
    cin >> n;

    cout << "Podaj " << n << " liczb:\n";
    for (int i = 0; i < n; i++)
        cin >> tab[i];

    mergeSort(tab, 0, n - 1);

    cout << "Posortowana tablica:\n";
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";

    cout << endl;
    return 0;
}
