#include <iostream>

using namespace std;

void menuUtama() {
  int menu;
  cout << "\nSilahkan Pilih Menu: " << endl;
  cout << "1. Mengurutkan NIM dan nama mahasiswa" << endl;
  cout << "2. Menghitung jumlah biaya parkir dari selisih 2 waktu " << endl;
  cout << "3. KELUAR" << endl;
}

struct Mahasiswa {
  long long int NIM;
  string Nama;
};

void inputMahasiswa(Mahasiswa data[], int jumlah) {
  for (int i = 0; i < jumlah; i++) {
    cout << "\nMasukkan data mahasiswa ke-" << i + 1 << ":" << endl;
    cout << "NIM: ";
    cin >> data[i].NIM;
    cout << "Nama: ";
    cin.ignore();
    getline(cin, data[i].Nama);
  }
}

void urutkanMahasiswa(Mahasiswa data[], int jumlah) {
  for (int i = 0; i < jumlah - 1; i++) {
    for (int j = 0; j < jumlah - i - 1; j++) {
      if (data[j].NIM < data[j + 1].NIM) {
        swap(data[j], data[j + 1]);
      }
    }
  }
}

void tampilkanHasil(Mahasiswa data[], int jumlah) {
  cout << "\nHasil urutan NIM dari input anda (terbesar ke terkecil):\n" << endl;
  for (int i = 0; i < jumlah; i++) {
    cout << "(NIM: " << data[i].NIM << " NAMA: " << data[i].Nama << ")" << endl;
  }
}

void urutMahasiswaDanNIM() {
  int jumlah;
  cout << "\nMasukkan jumlah mahasiswa: ";
  cin >> jumlah;

  Mahasiswa data[jumlah];

  inputMahasiswa(data, jumlah);
  urutkanMahasiswa(data, jumlah);
  tampilkanHasil(data, jumlah);
}

struct waktuParkir {
  int jam;
  int menit;
  int detik;
};

void hitungLamaParkir(waktuParkir waktuMasuk, waktuParkir waktuKeluar, waktuParkir &lamaParkir, int &biayaParkir) {
  lamaParkir.jam = waktuKeluar.jam - waktuMasuk.jam;
  lamaParkir.menit = waktuKeluar.menit - waktuMasuk.menit;
  lamaParkir.detik = waktuKeluar.detik - waktuMasuk.detik;

  if (lamaParkir.detik < 0) {
    lamaParkir.detik += 60;
    lamaParkir.menit--;
  }
  if (lamaParkir.menit < 0) {
    lamaParkir.menit += 60;
    lamaParkir.jam--;
  }

  if (lamaParkir.jam >= 1 || lamaParkir.menit > 0 || lamaParkir.detik > 0) {
    biayaParkir = 3000;
  }
  biayaParkir += lamaParkir.jam * 3000;
}

void hasilHitungParkir(waktuParkir waktuMasuk, waktuParkir waktuKeluar, waktuParkir lamaParkir, int biayaParkir) {
  cout << "\nWaktu Masuk   :         "<< waktuMasuk.jam << " : " << waktuMasuk.menit << " : " << waktuMasuk.detik << endl;
  cout << "Waktu Keluar  :         "<< waktuKeluar.jam << " : " << waktuKeluar.menit << " : " << waktuKeluar.detik << endl;
  cout << "Lama Parkir   :         "<< lamaParkir.jam << " Jam " << lamaParkir.menit << " Menit " << lamaParkir.detik << " Detik " << endl;
  cout << "====================================" << endl;
  cout << "Total harga   :         " << "Rp " << biayaParkir << endl;
}

void hitungParkir() {
  waktuParkir waktuMasuk, waktuKeluar, lamaParkir;
  int biayaParkir = 3000;

  do {
    cout << "\nMasukkan waktu masuk (j/m/d): ";
    cin >> waktuMasuk.jam >> waktuMasuk.menit >> waktuMasuk.detik;

    if (waktuMasuk.jam < 0 || waktuMasuk.jam > 23 || waktuMasuk.menit < 0 || waktuMasuk.menit > 59 || waktuMasuk.detik < 0 || waktuMasuk.detik > 59) {
      cout << "\nWaktu masuk tidak valid. Jam harus dalam rentang 0-23, menit dan detik dalam rentang 0-59." << endl;
    } else {
      break;
    }
  } while(true);

  do {
    cout << "\nMasukkan waktu keluar (j/m/d): ";
    cin >> waktuKeluar.jam >> waktuKeluar.menit >> waktuKeluar.detik;

    if (waktuKeluar.jam < 0 || waktuKeluar.jam > 23 || waktuKeluar.menit < 0 || waktuKeluar.menit > 59 || waktuKeluar.detik < 0 || waktuKeluar.detik > 59) {
      cout << "\nWaktu keluar tidak valid. Jam harus dalam rentang 0-23, menit dan detik dalam rentang 0-59." << endl;
    } else if (waktuKeluar.jam < waktuMasuk.jam || (waktuKeluar.jam == waktuMasuk.jam && waktuKeluar.menit < waktuMasuk.menit) || (waktuKeluar.jam == waktuMasuk.jam && waktuKeluar.menit == waktuMasuk.menit && waktuKeluar.detik < waktuMasuk.detik)) {
      cout << "\nWaktu keluar harus setelah waktu masuk." << endl;
    } else {
      break;
    }
  } while (true);

  hitungLamaParkir(waktuMasuk, waktuKeluar, lamaParkir, biayaParkir);
  hasilHitungParkir(waktuMasuk, waktuKeluar, lamaParkir, biayaParkir);
}

int main() {
  int menu;

  while (true) {
    menuUtama();

    cout << "\nPilihan Anda (1/2/3): ";
    cin >> menu;

    if (menu == 1) {
      urutMahasiswaDanNIM();
    } else if (menu == 2) {
      hitungParkir();
    } else if (menu == 3) {
      cout << "\nTerima kasih, program selesai." << endl;
      return 0;
    } else {
      cout << "\n\nPilihan tidak valid. Silakan pilih menu yang benar." << endl;
    }
  }
  return 0;
}

/*
  Nama  : Hafidz Ramadhan Ghiffari
  NIM   : 3337230071
  Kelas : B Semester 1
*/