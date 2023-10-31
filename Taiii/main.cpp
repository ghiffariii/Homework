# include <iostream>
# include <cmath>

using namespace std;
int main () {
  int pilihan;

  do {
    cout << "\n################### MAIN MENU ###################" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1. Menghitung jarak titik koordinat cartecius" << endl;
    cout << "2. Menghitung perkalian deret bilangan prima" << endl;
    cout << "3. Menghitung nilai maksimum dari empat bilangan" << endl;
    cout << "4. Menentukan keadaan inputan suhu" << endl;
    cout << "5. KELUAR PROGRAM" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Masukkan pilihan anda (1, 2, 3, 4, 5) >> "; cin >> pilihan;

    switch (pilihan ) {
      case 1: {
        cout << "\n    Menghitung Jarak Koordinat Cartesius   " << endl;
        cout << "-------------------------------------------" << endl;
        double x1, x2, y1, y2;

        cout << "\nMasukkan koordinat titik pertama x1 >> "; cin >> x1;
        cout << "y1 >> "; cin >> y1;

        cout << "Masukkan koordinat titik pertama x2 >> "; cin >> x2;
        cout << "y2 >> "; cin >> y2;

        double jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        cout << "\nJarak antara titik (" << x1 << ", " << y1 << ") dan titik (" << x2 << ", " << y2 << ") adalah: " << jarak << "\n" << endl;
      
      break;
      }
      case 2: {
        cout << "\n    Menghitung Perkalian Deret Prima   " << endl;
        cout << "---------------------------------------" << endl;

        int maxDeret;
        cout << "Masukkan maksimal deret bilangan prima: "; cin >> maxDeret;

        int hasilKali = 1;
        int hitung = 0;

        cout << "Deret bilangan prima: ";
        for (int i = 2; i <= maxDeret; ++i) {
          int iniPrima = 1;
        for (int j = 2; j * j <= i; ++j) {
          if (i % j == 0) {
            iniPrima = 0;
            break;
          }
        }
        if (iniPrima) {
          if (hitung > 0) {
            cout << " x ";
          }
          cout << i;
          hasilKali *= i;
          ++hitung;
          }
        }

        cout << " = " << hasilKali << endl;
        break;
      }
      case 3: {
        cout << "\n    Menghitung Nilai Maksimum   " << endl;
        cout << "--------------------------------" << endl;
        double bil_1, bil_2, bil_3, bil_4;

        cout << "Masukkan bilangan pertama >> "; cin >> bil_1;
        cout << "Masukkan bilangan kedua >> "; cin >> bil_2;
        cout << "Masukkan bilangan ketiga >> "; cin >> bil_3;
        cout << "Masukkan bilangan keempat >> "; cin >> bil_4;

        if ((bil_1 > bil_2) && (bil_1 > bil_3) && (bil_1 > bil_4)) {
          cout << "\nNilai maksimum ada di bilangan pertama: " << bil_1 << endl;
        } if ((bil_2 > bil_1) && (bil_2 > bil_3) && (bil_2 > bil_4)) {
          cout << "\nNilai maksimum ada di bilangan kedua: " << bil_2 << endl;
        } if ((bil_3 > bil_1) && (bil_3 > bil_2) && (bil_3 > bil_4)) {
          cout << "\nNilai maksimum ada di bilangan ketiga: " << bil_3 << endl;
        } if ((bil_4 > bil_1) && (bil_4 > bil_2) && (bil_4 > bil_3)) {
          cout << "\nNilai maksimum ada di bilangan keempat: " << bil_4 << endl;
        }

        break;
      }
      case 4: {
        double suhu;

        cout << "\n    Mengukur Keadaan Suhu   " << endl;
        cout << "----------------------------" << endl;
        cout << "Masukkan suhu >> "; cin >> suhu;

        if (suhu < 20) cout << "\nSuhu saat ini DINGIN, " << suhu << "'C" << endl;
        if (suhu <= 25 && suhu > 20) cout << "\nSuhu saat ini SEJUK, " << suhu << "'C" << endl;
        if (suhu <= 30 && suhu > 25) cout << "\nSuhu saat ini HANGAT, " << suhu << "'C" << endl;
        if (suhu <= 35 && suhu > 30) cout << "\nSuhu saat ini PANAS, " << suhu << "'C" << endl;
        if (suhu <= 40 && suhu > 35) cout << "\nSuhu saat ini SANGAT PANAS, " << suhu << "'C" << endl;
        if (suhu > 40) cout << "\nSuhu tidak terdefinisi" << endl;

        break;
      }
      case 5: {
        cout << "\nTerima kasih telah menggunakan program kami.\n" << endl;

        break;
      }
      default: {
        cout << "\nPilihan tidak valid. Silahkan coba lagi.\n";
        break;
      }
    }
  } while (pilihan != 5);

  return 0;
}