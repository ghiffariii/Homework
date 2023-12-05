#include <cstring>
#include <conio.h>
#include <ctime>
#include <iostream>

using namespace std;

struct waktuPinjam {
  int tahun;
  int bulan;
  int tanggal;
};

struct barang {
  string kodeBuku;
  string judulBuku;
  long long biaya;
  int jumlahKetersediaan;
  bool statusBuku;
  waktuPinjam waktuPeminjaman;
  barang* next;
};

barang* searchBarang(barang* head, string kodeBarang);

void tambahBuku(barang** head) {
  barang* barangBaru = new barang();

  system("cls");

  cout << "===== TAMBAH DATA BUKU =====" << endl;

  cout << "Masukkan kode buku: ";
  cin >> barangBaru->kodeBuku;

  cout << "Masukkan judul buku: ";
  cin.ignore();
  getline(cin, barangBaru->judulBuku);

  cout << "Masukkan jumlah buku: ";
  cin >> barangBaru->jumlahKetersediaan;

  barangBaru->statusBuku = (barangBaru->jumlahKetersediaan > 0);

  barangBaru->next = NULL;
  if (*head == NULL) {
    *head = barangBaru;
    return;
  }
  barang* temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = barangBaru;
}

void displayDataBuku(barang* head) {
  barang* temp = head;

  if (temp == NULL) {
    cout << "\nData buku masih kosong." << endl;
    return;
  }

  while (temp != NULL) {
    cout << "\nKode buku    : " << temp->kodeBuku << endl;
    cout << "Judul buku   : " << temp->judulBuku << endl;
    cout << "Jumlah buku  : " << temp->jumlahKetersediaan << endl;
    cout << "Status       : " << (temp->statusBuku ? "Tersedia" : "Tidak Tersedia") << endl;
    temp = temp->next;
  }
  getch();
  system("cls");
}

void deleteDataBuku(barang** head) {
  if (*head == NULL) {
    cout << "\nData buku kosong." << endl;
    return;
  }

  string searchKodeBuku;
  cout << "\nMasukkan kode buku yang ingin dihapus: ";
  cin >> searchKodeBuku;

  if ((*head)->kodeBuku == searchKodeBuku) {
    barang* temp = *head;
    *head	 = (*head)->next;
    delete temp;
    cout << "\nBuku dengan kode " << searchKodeBuku << " berhasil dihapus" << endl;
    return;
  }

  barang* temp = *head;
  barang* prev = NULL;

  while (temp != NULL && temp->kodeBuku != searchKodeBuku) {
    prev = temp;
    temp = temp->next;
  }

  if (temp != NULL) {
    prev->next = temp->next;
    delete temp;
    cout << "\nBuku dengan kode " << searchKodeBuku << " berhasil dihapus" << endl;
  } else {
    cout << "\nBuku dengan kode " << searchKodeBuku << " tidak ditemukan" << endl;
  }
}

int selisihHari(waktuPinjam tanggalPeminjaman, waktuPinjam tanggalPengembalian) {
  int selisih = 0;

  while (tanggalPeminjaman.tahun != tanggalPengembalian.tahun || tanggalPeminjaman.bulan != tanggalPengembalian.bulan || tanggalPeminjaman.tanggal != tanggalPengembalian.tanggal) {
    selisih++;
    tanggalPeminjaman.tanggal++;

    if (tanggalPeminjaman.tanggal > 31) {
      tanggalPeminjaman.tanggal = 1;
      tanggalPeminjaman.bulan++;

      if (tanggalPeminjaman.bulan > 12) {
        tanggalPeminjaman.bulan = 1;
        tanggalPeminjaman.tahun++;
      }
    }
  }

  return selisih;
}

void peminjamanBuku(barang** head) {
  string kodeBuku;
  waktuPinjam tanggalPeminjaman;

  cout << "Masukkan kode buku yang ingin dipinjam: "; 
  cin >> kodeBuku;
  barang* bukuDipinjam = searchBarang(*head, kodeBuku);

  if (bukuDipinjam == NULL) {
    cout << "Buku dengan kode " << kodeBuku << " tidak ditemukan." << endl;
    return;
  }

  if (bukuDipinjam->jumlahKetersediaan <= 0) {
    cout << "Maaf, stock buku ini sudah habis." << endl;
    return;
  }

  cout << "Masukkan tanggal peminjaman: ";
  cin >> tanggalPeminjaman.tahun >> tanggalPeminjaman.bulan >> tanggalPeminjaman.tanggal;

  bukuDipinjam->jumlahKetersediaan--;
  bukuDipinjam->waktuPeminjaman = tanggalPeminjaman;

  cout << "Buku dengan kode " << kodeBuku << " berhasil dipinjam." << endl;
}

void pengembalianBuku(barang** head) {
  string kodeBuku;
  waktuPinjam tanggalPeminjaman, tanggalPengembalian;

  cout << "Masukkan kode buku yang ingin dipinjam: "; cin >> kodeBuku;
  barang* bukuDikembalikan = searchBarang(*head, kodeBuku);

  if (bukuDikembalikan == NULL) {
    cout << "Buku dengan kode " << kodeBuku << " tidak ditemukan." << endl;
    return;
  }

  cout << "Masukkan tanggal pengembalian: ";
  cin >> tanggalPengembalian.tahun >> tanggalPengembalian.bulan >> tanggalPengembalian.tanggal;

  int selisih = selisihHari(tanggalPeminjaman, tanggalPengembalian);

  cout << "Selisih hari antara kedua tanggal: " << selisih << " hari\n";
}

barang* searchBarang(barang* head, string kodeBuku) {
  barang* temp = head;
  while (temp != NULL) {
    if (temp->kodeBuku == kodeBuku) {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

int main() {
  struct barang* HEAD = NULL;
  int		 jawab;

  while (jawab != 0) {
    cout << "\n===== MENU EDIT DATA =====" << endl;
    cout << "[1] Tambah Buku Baru" << endl;
    cout << "[2] Hapus Data Buku" << endl;
    cout << "[3] Tampilkan Buku" << endl;
    cout << "[4] Peminjaman Buku" << endl;
    cout << "[5] Pengembalian Buku" << endl;
    cout << "[0] Kembali ke Menu Utama" << endl;
    cout << "\nMasukkan menu: ";
    cin >> jawab;

    system("cls");

    if (jawab == 1) {
      tambahBuku(&HEAD);
    } else if (jawab == 2) {
      deleteDataBuku(&HEAD);
    } else if (jawab == 3) {
      displayDataBuku(HEAD);
    } else if (jawab == 4) {
      peminjamanBuku(&HEAD);
    } else if (jawab == 5) {
      pengembalianBuku(&HEAD);
    } else if (jawab == 0) {
      cout << "\nTerima kasih sudah menggunakan program kami." << endl;
    } else {
      cout << "\nMaaf, menu " << jawab << " tidak tersedia." << endl;
    }
  }

  return 0;
}

/*
  Nama  : Hafidz Ramadhan Ghiffari
  NIM   : 3337230071
  Kelas : B
*/