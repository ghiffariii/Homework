#include <iostream>

using namespace std;

int main() {
  int n;

  while (true) {
    cout << "\n              MAIN MENU             " << endl;
    cout << "#####################################\n" << endl;
    cout << "1. Menampilkan bilangan prima" << endl;
    cout << "2. Menampilkan faktorial" << endl;
    cout << "3. Menampilkan luas persegi panjang" << endl;
    cout << "4. Menampilkan luas segitiga" << endl;
    cout << "5. Menampilkan segitiga bintang" << endl;
    cout << "6. Menampilkan segitiga bintang kebalik" << endl;
    cout << "7. Mengecek bilangan prima atau bukan" << endl;
    cout << "8. EXIT\n" << endl;
    cout << "######################################" << endl;
    cout << "Menu pilihan anda: (1, 2, 3, 4, 5, 6, 7, 8): "; cin >> n;

    switch (n) {
      case 1: {
        int x;

        cout << "## BILANGAN PRIMA ##" << endl;
        cout << "Maksimal bilangan prima sampai berapa? "; cin >> x;


        for(int a = 1; a < x; a++) {
          int bil = 0;
          for(int b = 1; b <= a; b++) {
            if(a % b == 0){
                bil = bil + 1;
            }
          }
          if(bil == 2) {
            cout << a << " ";
          }
        }
        cout << "\n" << endl;
        system("pause");
        break;
      }
      case 2: {
        double n, k, f = 1;

        k = 0;

        cout << "## FAKTORIAL ##" << endl;
        cout << "Masukkan nilai: "; cin >> n;
        k = k + n;
        do {
          f *= n;
          n--;
        }
        while (n >= 1);

        cout << "Hasil faktorial dari " << k << "! adalah: " << f << endl;
        
        system("pause");
        break;
      }
      case 3: {
        double lebar, tinggi, luas;

        cout << "## LUAS PERSEGI PANJANG ##" << endl;
        cout << "Masukkan lebar persegi: "; cin >> lebar;
        cout << "Masukkan tinggi persegi: "; cin >> tinggi;

        luas = tinggi*lebar;
        cout << "Luas perseginya adalah: " << luas << endl;

        system("pause");
        break;
      }
      case 4: {
        double a_s3, t_s3, l_s3;

        cout << "## LUAS SEGITIGA ##" << endl;
        cout << "Masukkan tinggi segitiga: "; cin >> t_s3;
        cout << "Masukkan alas persegi: "; cin >> a_s3;

        l_s3 = (t_s3*a_s3)/2;
        cout << "Luas segitiganya adalah: " << l_s3 << endl;

        system("pause");
        break;
      }
      case 5: {
        int t_bintang;
        cout << "## SEGITIGA BINTANG ##" << endl;
        cout<<"Masukan tinggi segitiga: "; cin>> t_bintang; 
        
        // Cetak segitiga bintang.
        for (int i = 1; i <= t_bintang; i++) {
          for (int j = 1; j <= i; j++) {
          cout << "* ";
        }
        cout << endl;
        }
        
        system("pause");
        break;
      }
      case 6: {
        int t_bintang;
        cout << "## SEGITIGA BINTANG KEBALIK ##" << endl;
        cout<<"Masukan tinggi segitiga: "; cin>> t_bintang; 
        
        // Cetak segitiga bintang.
        for (int i = 1; i <= t_bintang; i++) {
          for (int j = t_bintang; j >= i; j--) {
          cout << "* ";
        }
        cout << endl;
        }
        
        system("pause");
        break;
      }
      case 7: {
        int nilai_p;

        cout << "## CEK BILANGAN PRIMA/BUKAN ##" << endl;
        cout << "Masukkan bilangan: "; cin >> nilai_p;

        if (nilai_p <= 1) {
          cout << nilai_p << " bukan bilangan prima." << endl;
        } else {
          int i;
          for (i = 2; i * i <= nilai_p; i++) {
            if (nilai_p % i == 0) {
              cout << nilai_p << " bukan bilangan prima." << endl;

              break;
            }
          }
          if (i * i > nilai_p) {
            cout << nilai_p << " adalah bilangan prima." << endl;
          }
        }

        system("pause");
        break;
      }
      case 8: {
        cout << "Terima Kasih telah menggunakan program kami :)" << endl;

        return 0;
      }
      default: {
        cout << "Maaf menu yang anda pilih tidak tersedia, silahkan pilih menu 1, 2, 3, 4, 5, 6, 7 atau 8" << endl;
        break;
      }
    }
  }
  return 0;
}