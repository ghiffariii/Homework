#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  void percabangan_9(); {
    char status;
    int grade;

    cout << "Masukkan Grade: "; cin >> grade;

    // Mendapatkan status pelajar
    status = (grade >= 60) ? 'L' : 'G';

    cout << status << endl;
  }

  void percabangan_10(); {
    string status;
    int grade;

    cout << "Masukkan Grade: "; cin >> grade;

    // Mendapatkan status pelajar
    status = (grade >= 60) ? "Lulus" : "Gak lulus";

    cout << status << endl;
  }
}