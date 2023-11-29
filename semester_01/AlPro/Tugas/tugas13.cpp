#include <cstring>
#include <iomanip>
#include <iostream>

#define WHITE "\033[97m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BG_GREEN "\033[42m"
#define BG_BLUE "\033[44m"
#define BG_YELLOW "\033[43m"
#define RESET "\033[0m"

using namespace std;

struct Nasabah {
  int	    noRekening;
  char	    nama[50];
  char	    alamat[100];
  long long saldo;
  Nasabah*  next;
};

Nasabah* searchNasabah(Nasabah* head, int noRekening);

void tambahNasabah(Nasabah** head) {
  Nasabah* nasabahBaru = new Nasabah();

  system("cls");

  cout << "Masukkan No. Rekening: ";
  cin >> nasabahBaru->noRekening;

  cout << "Nama: ";
  cin.ignore();
  cin.getline(nasabahBaru->nama, sizeof(nasabahBaru->nama));

  cout << "Alamat: ";
  cin.getline(nasabahBaru->alamat, sizeof(nasabahBaru->alamat));

  cout << "Masukkan saldo: ";
  cin >> nasabahBaru->saldo;

  nasabahBaru->next = NULL;
  if (*head == NULL) {
    *head = nasabahBaru;
    return;
  }
  Nasabah* temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = nasabahBaru;
}

void displayDataNasabah(Nasabah* head) {
  Nasabah* temp = head;

  if (temp == NULL) {
    cout << "Linkedlist ini masih kosong" << endl;
    return;
  }

  while (temp != NULL) {
    cout << "No. Rek: " << temp->noRekening << endl;
    cout << "Nama: " << temp->nama << endl;
    cout << "Alamat: " << temp->alamat << endl;
    cout << "Saldo: Rp " << temp->saldo << "\n" << endl;
    temp = temp->next;
  }
  cout << endl;
  system("pause");
}

void ubahDataNasabah(Nasabah* head) {
  int noRekening;
  cout << "Masukkan nomor rekening nasabah yang ingin diubah: ";
  cin >> noRekening;

  Nasabah* temp = searchNasabah(head, noRekening);

  if (temp != NULL) {
    cout << "Pilih data yang ingin diubah:" << endl;
    cout << "1. Nama" << endl;
    cout << "2. Alamat" << endl;
    cout << "3. Saldo" << endl;

    int pilihan;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
      cout << "Masukkan nama baru: ";
      cin.ignore();
      cin.getline(temp->nama, sizeof(temp->nama));
    } else if (pilihan == 2) {
      cout << "Masukkan alamat baru: ";
      cin.ignore();
      cin.getline(temp->alamat, sizeof(temp->alamat));
    } else if (pilihan == 3) {
      cout << "Masukkan saldo baru: ";
      cin >> temp->saldo;
    } else {
      cout << "Pilihan tidak valid" << endl;
      return;
    }
    cout << "Perubahan data berhasil!" << endl;
  } else {
    cout << "Nasabah dengan nomor rekening " << noRekening << " tidak ditemukan" << endl;
  }

  system("pause");
}


void deleteDataNasabah(Nasabah** head) {
  if (*head == NULL) {
    cout << "Linkedlist ini masih kosong" << endl;
    return;
  }

  int searchRekening;
  cout << "Masukkan Nomor Rekening yang ingin dihapus: ";
  cin >> searchRekening;

  if ((*head)->noRekening == searchRekening) {
    Nasabah* temp = *head;
    *head	  = (*head)->next;
    delete temp;
    cout << "Data dengan No. Rek " << searchRekening << " berhasil dihapus" << endl;
    return;
  }

  Nasabah* temp = *head;
  Nasabah* prev = NULL;

  while (temp != NULL && temp->noRekening != searchRekening) {
    prev = temp;
    temp = temp->next;
  }

  if (temp != NULL) {
    prev->next = temp->next;
    delete temp;
    cout << "Data dengan No. Rek " << searchRekening << " berhasil dihapus" << endl;
  } else {
    cout << "Data dengan No. Rek " << searchRekening << " tidak ditemukan" << endl;
  }
}

void deposit(Nasabah* head) {
  int noRekening;
  cout << "\nMasukkan No Rekening yang ingin di deposit: ";
  cin >> noRekening;

  Nasabah* transaksi = searchNasabah(head, noRekening);

  if (transaksi != NULL) {
    long long jumlahDeposit;
    cout << "\nMasukkan jumlah deposit: ";
    cin >> jumlahDeposit;

    if (jumlahDeposit > 0) {
      transaksi->saldo += jumlahDeposit;
      cout << "\n" << BG_GREEN << " SUCCESS " << RESET << " Deposit berhasil. Saldo sekarang: Rp " << transaksi->saldo << endl;
    } else {
      cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Jumlah deposit tidak valid" << endl;
    }
  } else {
    cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Nasabah dengan nomor rekening " << noRekening << " tidak ditemukan" << endl;
  }

  system("pause");
}

void tarikTunai(Nasabah* head) {
  int noRekening;
  cout << "Masukkan nomor rekening yang ingin di-tarik tunai: ";
  cin >> noRekening;

  Nasabah* transaksi = searchNasabah(head, noRekening);

  if (transaksi != NULL) {
    long long jumlahTarikTunai;
    cout << "Masukkan jumlah tarik tunai: ";
    cin >> jumlahTarikTunai;

    if (jumlahTarikTunai > 0 && jumlahTarikTunai <= transaksi->saldo) {
      transaksi->saldo -= jumlahTarikTunai;
      cout << "\n" << BG_GREEN << " SUCCESS " << RESET << "Tarik tunai berhasil. Saldo sekarang: Rp " << transaksi->saldo << endl;
    } else {
      cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Jumlah tarik tunai tidak valid atau melebihi saldo" << endl;
    }
  } else {
    cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Nasabah dengan nomor rekening " << noRekening << " tidak ditemukan" << endl;
  }

  system("pause");
}

void transfer(Nasabah* head) {
  int DariNoRekening, UntukNoRekening;
  cout << "Masukkan nomor rekening asal: ";
  cin >> DariNoRekening;

  Nasabah* DariNasabah = searchNasabah(head, DariNoRekening);

  if (DariNasabah != NULL) {
    cout << "Masukkan nomor rekening tujuan: ";
    cin >> UntukNoRekening;

    Nasabah* untukNasabah = searchNasabah(head, UntukNoRekening);

    if (untukNasabah != NULL) {
      if (DariNoRekening != UntukNoRekening) {
	      long long jumlahTransfer;
	      cout << "Masukkan jumlah transfer: ";
	      cin >> jumlahTransfer;

	      if (jumlahTransfer > 0 && jumlahTransfer <= DariNasabah->saldo) {
	        DariNasabah->saldo -= jumlahTransfer;
	        untukNasabah->saldo += jumlahTransfer;

	        cout << "\n" << BG_GREEN << " SUCCESS " << RESET << "Transfer berhasil" << endl; 
          cout << "Saldo " << DariNasabah->nama << " sekarang: Rp " << DariNasabah->saldo << endl;
	        cout << "Saldo " << untukNasabah->nama << " sekarang: Rp " << untukNasabah->saldo << endl;
	      } else {
	        cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Jumlah transfer melebihi saldo" << endl;
	      }
      } else {
	      cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Nomor rekening asal dan tujuan sama" << endl;
      }
    } else {
      cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Nasabah dengan nomor rekening tujuan " << UntukNoRekening << " tidak ditemukan" << endl;
    }
  } else {
    cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Nasabah dengan nomor rekening asal " << DariNoRekening << " tidak ditemukan" << endl;
  }

  system("pause");
}

void menuTransaksi(Nasabah* transaksi) {
  int pilihanTransaksi;
  system("cls");

  cout << GREEN << "\n============== MENU TRANSAKSI ==============\n" << RESET << endl;
  cout << "[" << YELLOW << "1" << RESET << "] Deposit" << endl;
  cout << "[" << YELLOW << "2" << RESET << "] Tarik Tunai" << endl;
  cout << "[" << YELLOW << "3" << RESET << "] Transfer" << endl;
  cout << "[" << YELLOW << "0" << RESET << "] Kembali ke Menu Utama" << endl;

  cout << "\nSilahkan pilih menu: ";
  cin >> pilihanTransaksi;

  if (pilihanTransaksi == 1) {
    deposit(transaksi);
  } else if (pilihanTransaksi == 2) {
    tarikTunai(transaksi);
  } else if (pilihanTransaksi == 3) {
    transfer(transaksi);
  } else if (pilihanTransaksi == 0) {
    cout << "Kembali ke Menu Utama" << endl;
  } else {
    cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Menu ini tidak tersedia\n" << endl;
  }
}

Nasabah* searchNasabah(Nasabah* head, int noRekening) {
  Nasabah* temp = head;
  while (temp != NULL) {
    if (temp->noRekening == noRekening) {
      return temp;
    }
    temp = temp->next;
  }
  return NULL;
}

int main() {
  struct Nasabah* HEAD = NULL;
  int		  pilihan;

  while (pilihan != 0) {
    system("cls");

    cout << RED << "  __  __      ____              _     " << endl;
    cout << " |  \\/  |    |  _ \\            | |    " << endl;
    cout << " | \\  / | ___| |_) | __ _ _ __ | | __ " << endl;
    cout << " | |\\/| |/ _ \\  _ < / _` | '_ \\| |/ / " << endl;
    cout << " | |  | |  __/ |_) | (_| | | | |   <  " << endl;
    cout << " |_|  |_|\\___|____/ \\__,_|_| |_|_|\\_\\ " << RESET << endl;

    cout << GREEN << "\n============== MAIN MENU ==============\n" << RESET << endl;

    cout << "[" << YELLOW << "1" << RESET << "] Tambah Data Nasabah" << endl;
    cout << "[" << YELLOW << "2" << RESET << "] Ubah Data Nasabah" << endl;
    cout << "[" << YELLOW << "3" << RESET << "] Hapus Data Nasabah" << endl;
    cout << "[" << YELLOW << "4" << RESET << "] Menu Transaksi" << endl;
    cout << "[" << YELLOW << "5" << RESET << "] Tampilkan Data Nasabah Data" << endl;
    cout << "[" << YELLOW << "0" << RESET << "] Exit" << endl;

    cout << "\nSilahkan pilih menu: ";
    cin >> pilihan;

    if (pilihan == 1) {
      tambahNasabah(&HEAD);
    } else if (pilihan == 2) {
      ubahDataNasabah(HEAD);
    } else if (pilihan == 3) {
      deleteDataNasabah(&HEAD);
    } else if (pilihan == 4) {
      menuTransaksi(HEAD);
    } else if (pilihan == 5) {
      displayDataNasabah(HEAD);
    } else if (pilihan == 0) {
      cout << "\n" << BG_BLUE << " INFO " << RESET << " Terima kasih sudah menggunakan program kami! Sampai jumpa~" << endl;
      system("pause");
    } else {
      cout << "\n" << BG_YELLOW << " INVALID " << RESET << " Menu ini tidak tersedia\n" << endl;
    }
  }

  return 0;
}

/*
  Nama  : Hafidz Ramadhan Ghiffari
  NIM   : 3337230071
  Kelas : B
*/