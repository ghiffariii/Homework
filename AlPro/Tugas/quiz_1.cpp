# include <iostream>
# include <cmath>

using namespace std;
int main () {
  int pilihan;

  do {
    cout << "################### MAIN MENU ###################" << endl;
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
        double x1, x2, y1, y2;

        cout << "Masukkan koordinat titik pertama x1 >> "; cin >> x1;
        cout << "y1 >> "; cin >> y1;

        cout << "Masukkan koordinat titik pertama x2 >> "; cin >> x2;
        cout << "y2 >> "; cin >> y2;

        double jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        cout << "\nJarak antara titik (" << x1 << ", " << y1 << ") dan titik (" << x2 << ", " << y2 << ") adalah: " << jarak << "\n" << endl;
      
      break;
      }
      case 2: {
        cout << "Belum ada" << endl;
      }
      case 3: {
        cout << "Menghitung Bilangan Maksimum" << endl;
        int bil_1, bil_2, bil_3, bil_4;

        cout << "Masukkan bilangan pertama >> "; cin >> bil_1;
        cout << "Masukkan bilangan kedua >> "; cin >> bil_2;
        cout << "Masukkan bilangan ketiga >> "; cin >> bil_3;
        cout << "Masukkan bilangan keempat >> "; cin >> bil_4;

        if ((bil_1 > bil_2) && (bil_1 > bil_3) && (bil_1 > bil_4)) {
          cout << "Nilai maksimum ada di bilangan pertama: " << bil_1 << endl;
        } if ((bil_2 > bil_1) && (bil_2 > bil_3) && (bil_2 > bil_4)) {
          cout << "Nilai maksimum ada di bilangan kedua: " << bil_2 << endl;
        } if ((bil_3 > bil_1) && (bil_3 > bil_2) && (bil_3 > bil_4)) {
          cout << "Nilai maksimum ada di bilangan ketiga: " << bil_3 << endl;
        } if ((bil_4 > bil_1) && (bil_4 > bil_2) && (bil_4 > bil_3)) {
          cout << "Nilai maksimum ada di bilangan keempat: " << bil_4 << endl;
        }

        break;
      }
      case 4: {
        
      }
      default: {
        cout << "Pilihan tidak valid. Silahkan coba lagi.\n";
        break;
      }
    }
  } while (pilihan != 5);

  return 0;
}