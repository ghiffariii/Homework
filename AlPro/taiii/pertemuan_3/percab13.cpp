#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  string nama, nim;
  int uts, uas, tugas;

  // Input
  cout << "NIM: "; cin >> nim;
    if (nim.length() < 9) {
    cout << "NIM anda tidak valid." << endl;

    return 1;
  }
  cout << "Nama: "; cin >> nama;
  cout << "Masukkan nilai UAS anda: "; cin >> uas;
  cout << "Masukkan nilai UTS anda: "; cin >> uts;
  cout << "Masukkan nilai tugas anda: "; cin >> tugas;

  // Output NIM dan Nama
  string lastThreeDigits = nim.substr(nim.length() - 3);
  int lastThreeDigitsInt = stoi(lastThreeDigits);

  if (lastThreeDigitsInt%2 == 0) {
    cout << "NIM anda adalah genap." << endl;
  } else {
    cout << "NIM anda adalah ganjil." << endl;
  }

  cout << "Nama: " << nama << endl;

  // Output Nilai
  if (lastThreeDigitsInt%2==0) {
    cout << "Nilai paling tinggi anda adalah ";

    if((uas>=uts) && (uas>=tugas)) cout << "UAS dengan nilai: " << uas << endl;
    if((uts>=uas) && (uts>=tugas)) cout << "UTS dengan nilai: " << uts << endl;
    if((tugas>=uas) && (tugas>=uts)) cout << "tugas dengan nilai: " << tugas << endl;
  } else {
    cout << "Nilai paling rendah anda adalah ";

    if((uas<=uts) && (uas<=tugas)) cout << "UAS dengan nilai: " << uas << endl;
    if((uts<=uas) && (uts<=tugas)) cout << "UTS dengan nilai: " << uts << endl;
    if((tugas<=uas) && (tugas<=uts)) cout << "tugas dengan nilai: " << tugas << endl;
  }

  // Rata-rata nilai dan Grade
  float rerata;
  rerata = (uas + uts + tugas)/3;

  cout << "Rata-rata nilai: " << rerata << endl;
    if (rerata >= 90) {
    cout << "Niai angka: A" << endl;
    }
    if (rerata >= 80 && rerata < 90) {
    cout << "Niai angka: A-" << endl;
    }
    if (rerata >= 75 && rerata < 80) {
    cout << "Niai angka: B+" << endl;
    }
    if (rerata >= 70 && rerata < 75) {
    cout << "Niai angka: B" << endl;
    }
    if (rerata >= 65 && rerata < 70) {
    cout << "Niai angka: C+" << endl;
    }
    if (rerata >= 60 && rerata < 65) {
    cout << "Niai angka: C" << endl;
    }
    if (rerata >= 55 && rerata < 60) {
    cout << "Niai angka: D" << endl;
    }
    if (rerata < 55) {
    cout << "Niai angka: E" << endl;
    }

    system("pause");
    return 0;
}