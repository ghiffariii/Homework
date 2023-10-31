#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "      MAIN MENU       " << endl;
    cout << "######################" << endl;
    cout << "1. Bilangan prima" << endl;
    cout << "2. Segitiga Siku-siku" << endl;
    cout << "3. Segitiga Siku-siku kebalik" << endl;
    cout << "######################" << endl;
    cout << "Menu pilihan anda: (1, 2, 3): "; cin >> n;

    // Pilihan Menu
    if(n = 2) {
        int tinggi;
        cout << "Masukkan tinggi segitiga: "; cin >> tinggi;
        // Cetak segitiga bintang.
        for (int i = 1; i <= tinggi; i++) {
            for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
        }
        return 0;
    } if(n = 3) {
        int tinggi;
        cout << "Masukkan tinggi segitiga: "; cin >> tinggi;
        // Cetak segitiga bintang.
        for (int i = 1; i <= tinggi; i++) {
            for (int j = tinggi; j >= i; j++) {
            cout << "* ";
        }
        cout << endl;
        }
        return 0;
    }
}