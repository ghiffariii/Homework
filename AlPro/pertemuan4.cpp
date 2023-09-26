#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  void percabangan_1 (); {
    int nilai;

    cout << "Masukkan nilai: "; cin >> nilai;

    if (nilai >= 90) {
        cout << "Nilai angka: A" << endl;
    } if (nilai < 90 && nilai > 60) {
        cout << "Nilai angka: B" << endl;
    } else {
        cout << "Maaf anda tidak lulus" << endl;
    }

  }

  // void percabangan_1
}