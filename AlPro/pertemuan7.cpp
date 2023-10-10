#include <iostream>
// #include <conio.h>
// Bubble sort, insertion sort
#include <math.h>

using namespace std;

float rumus1(int a, int b) {
  float hasil;

  hasil = sqrt(pow(a, 2) + pow(b, 2));

  return hasil;
}
float rumus2(int a, int b, int c) {
  float hasil;

  hasil = pow(b, 2) - (4 * a * c);

  return sqrt(hasil);
}
void menu1() {
  int a, b, c;
  cout << "Masukkan nilai a: "; cin >> a;
  cout << "Masukkan nilai b: "; cin >> b;
  cout << "Masukkan nilai c: "; cin >> c;

  if (rumus2(a, b, c) > 0) {
    cout << rumus2(a, b, c) << endl;
  } else {
    cout << "Tidak terdefinisi" << endl;
  }
  cout << endl;
  rumus1(a, b);
}
void menu2() {
  int n = 6;
  int dataBelumTerurut[6] = {1, 5, 3, 2, 5, 4};

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(dataBelumTerurut[j] > dataBelumTerurut[j + 1]) {
        int temp = dataBelumTerurut[j];
        dataBelumTerurut[j] = dataBelumTerurut[j + 1];
        dataBelumTerurut[j + 1] = temp;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << dataBelumTerurut[i] << " ";
  }
}
void menu3() {
  int n;
  cout << "Masukkan jumlah data: "; cin >> n;
  int dataGaUrut[n];

  for(int i = 0; i < n; i++) {
    cout << "Masukkan data " << i + 1 << ": ";
    cin >> dataGaUrut[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(dataGaUrut[j] > dataGaUrut[j + 1]) {
        int temp = dataGaUrut[j];
        dataGaUrut[j] = dataGaUrut[j + 1];
        dataGaUrut[j + 1] = temp;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << dataGaUrut[i] << " ";
  }
  cout << "\n" << endl;
}

int main() {
  int i = 1, menu;

  do {
    cout << "1. Menghitung rumus pitaghoras" << endl;
    cout << "2. Sorting Statis" << endl;
    cout << "3. Sorting Dinamis" << endl;
    cout << "4. Sorting Dinamis Terbalik" << endl;
    cout << "\nSilahkan pilih menu: "; cin >> menu;

    if(menu == 1) {
      menu1();
    } else if(menu == 2) {
      menu2();
    } else if(menu == 3) {
      menu3();
    } else {
      cout << "Menu tidak ada" << endl;
    }
  } while(i > 0);
}