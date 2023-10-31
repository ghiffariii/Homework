#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
  /*
  void percabangan_1 ();
  int nilai;

  cout << "Masukkan nilai: "; cin >> nilai;

  if (nilai >= 90) {
    cout << "Niai angka: A" << endl;
  }
  if (nilai < 90) {
    cout << "Nilai angka: B" << endl;
  }
  else {
    cout << "Maaf anda tidak lulus" << endl;
  }
  

  void percabangan_2 ();
  int nilai;

  cout << "Masukkan nilai: "; cin >> nilai;

  if (nilai%2==0) {
    cout << "Nilai " << nilai << " adalah nilai genap" << endl;
  }
  else {
    cout << "Nilai " << nilai << " adalah nilai ganjil" << endl;
  }
  */
  void percabangan_3 (); {
    int gol;
    cout << "Masukkan gol: "; cin >> gol;

    switch (gol) {
      case 1 : cout << "Gaji = 100";
      break;

      case 2 : cout << "Gaji = 200";
      break;

      case 3 : cout << "Gaji = 300";
      break;

      default : cout << "Golongan Salah";
      break;
    }
  }

  return 0;

}