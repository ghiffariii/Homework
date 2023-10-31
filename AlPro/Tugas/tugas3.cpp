#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  // Deklarasi variabel
  string nama, nim;
  int uts, uas, tugas;

  // Input NIM
  cout << "NIM: "; cin >> nim;
  if (nim.length() < 9) { // kalau kurang dari 9, tidak valid
    cout << "NIM anda tidak valid." << endl;

    return 1;
  }

  // Input Nama dan nilai-nilai
  cout << "Nama: "; cin >> nama;
  cout << "Nilai UAS: "; cin >> uas;
  cout << "Nilai UTS: "; cin >> uts;
  cout << "Nilai Tugas: "; cin >> tugas;

  // Output NIM
  string tigaDigitTerakhir = nim.substr(nim.length() - 3);
  int tigaDigitTerakhirInt = stoi(tigaDigitTerakhir);

  if (tigaDigitTerakhirInt%2 == 0) {
    cout << "NIM " << nim << " = GENAP" << endl;
  } else {
    cout << "NIM " << nim << " = GANJIL" << endl;
  }

  // Output Nama
  cout << "Nama: " << nama << endl;

  // Output Nilai
  if (tigaDigitTerakhirInt%2 == 0) {
    cout << "Nilai paling tinggi ";
    
    if ((uas >= uts) && (uas >= tugas)) cout << "UAS: " << uas << endl;
    if ((uts >= uas) && (uts >= tugas)) cout << "UTS: " << uts << endl;
    if ((tugas >= uts) && (uas <= tugas)) cout << "TUGAS: " << tugas << endl;
  } else {
    cout << "Nilai paling rendah ";

    if ((uas <= uts) && (uas <= tugas)) cout << "UAS: " << uas << endl;
    if ((uts <= uas) && (uts <= tugas)) cout << "UTS: " << uts << endl;
    if ((tugas <= uts) && (uas >= tugas)) cout << "TUGAS: " << tugas << endl;
  }

  // Rata-rata Nilai
  double rerata;
  rerata = (uas + uts + tugas)/3;

  cout << "Rata-rata nilai: " << rerata << endl;

  // Nilai dengan huruf
  if (rerata > 100) {
    cout << "Nilai melewati maksimum (100)" << endl;
  } if (rerata >= 90 && rerata < 100) {
    cout << "Nilai: A" << endl;
  } if (rerata >= 80 && rerata < 90) {
    cout << "Nilai: A-" << endl;
  } if (rerata >= 75 && rerata < 80) {
    cout << "Nilai: B+" << endl;
  } if (rerata >= 70 && rerata < 75) {
    cout << "Nilai: B" << endl;
  } if (rerata >= 65 && rerata < 70) {
    cout << "Nilai: C+" << endl;
  } if (rerata >= 60 && rerata < 65) {
    cout << "Nilai: C" << endl;
  } if (rerata >= 55 && rerata < 60) {
    cout << "Nilai: D" << endl;
  } else {
    cout << "Nilai: E" << endl;
  }

  system("pause");
  return 0;
}