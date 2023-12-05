#include <iostream>

struct Waktu {
  int tahun;
  int bulan;
  int tanggal;
};

int HitungSelisihHari(Waktu tanggal1, Waktu tanggal2) {
  int selisihHari = 0;

  while (tanggal1.tahun != tanggal2.tahun || tanggal1.bulan != tanggal2.bulan || tanggal1.tanggal != tanggal2.tanggal) {
    selisihHari++;
    tanggal1.tanggal++;

    if (tanggal1.tanggal > 31) {
      tanggal1.tanggal = 1;
      tanggal1.bulan++;

      if (tanggal1.bulan > 12) {
        tanggal1.bulan = 1;
        tanggal1.tahun++;
      }
    }
  }

  return selisihHari;
}

int main() {
  Waktu waktu1, waktu2;

  std::cout << "Masukkan tanggal pertama (tahun bulan tanggal): ";
  std::cin >> waktu1.tahun >> waktu1.bulan >> waktu1.tanggal;

  std::cout << "Masukkan tanggal kedua (tahun bulan tanggal): ";
  std::cin >> waktu2.tahun >> waktu2.bulan >> waktu2.tanggal;

  int selisihHari = HitungSelisihHari(waktu1, waktu2);

  std::cout << "Selisih hari antara kedua tanggal: " << selisihHari << " hari\n";

  return 0;
}
