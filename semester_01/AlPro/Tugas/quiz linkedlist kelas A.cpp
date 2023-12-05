#include <conio.h>

#include <cstring>
#include <iostream>


using namespace std;

struct Barang {
  int		 	kode;
  char	 	nama[100];
  long		hrg;
  long		jmlh;
  struct  Barang *next;
};

void insertBarang(Barang **brg) {
  Barang *brgbaru = new Barang();
  cout << "Masukkan kode barang	: ";
  cin >> brgbaru->kode;
  cout << "Masukkan nama barang	: ";
  cin.ignore();
  cin.getline(brgbaru->nama, sizeof(brgbaru->nama));
  cout << "Masukkan harga		: Rp. ";
  cin >> brgbaru->hrg;
  cout << "Masukkan jumlah stock	: ";
  cin >> brgbaru->jmlh;

  system("cls");

  cout << "Barang Telah di Tambahkan !" << endl;

  getch();
  system("cls");

  brgbaru->next = NULL;
  if (*brg == NULL) {
    (*brg) = brgbaru;
    return;
  }
  Barang *temp = (*brg);
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = brgbaru;
}

void daftarBarang(Barang *brg) {
  Barang *temp = brg;

  if (temp == NULL) {
    cout << "Tidak Ada Barang yang Terdaftar :(" << endl;
    return;
  }
  cout << "========================= Daftar Barang =======================" << endl;
  while (temp != NULL) {
    cout << "Kode Barang	: " << temp->kode << endl;
    cout << "Nama Barang	: " << temp->nama << endl;
    cout << "Harga		: Rp. " << temp->hrg << endl;
    cout << "Stock		: " << temp->jmlh << endl;
    cout << "===============================================================" << endl;

    temp = temp->next;
  }
  getch();
  system("cls");
}

void hapusBarang(Barang **brg) {
  if (*brg == NULL) {
    cout << "Tidak ada barang yang terdaftar !" << endl;
    return;
  }

  int Kode;
  cout << "Masukkan Kode Barang yang akan dihapus: ";
  cin >> Kode;
  Barang *temp = *brg;
  Barang *prev = NULL;

  while (temp != NULL && temp->kode != Kode) {
    prev = temp;
    temp = temp->next;
  }
  if (temp != NULL) {
    if (prev != NULL) {
      prev->next = temp->next;
    } else {
      *brg = temp->next;
    }
    delete temp;
    cout << "Barang dengan Kode " << Kode << " berhasil dihapus" << endl;
  } else {
    cout << "Barang dengan Kode " << Kode << " tidak ditemukan." << endl;
  }
}

void transaksi(Barang *brg) {
  while (true) {
    if (brg == NULL) {
      cout << "Belum ada barang !" << endl;
      return;
    }

    int	    Kode;
    Barang *temp = NULL;

    do {
      cout << "===============================================================" << endl;
      temp = temp->next;
      cout << "Kode Barang	: " << temp->kode << endl;
      cout << "Nama Barang	: " << temp->nama << endl;
      cout << "Harga		: Rp. " << temp->hrg << endl;
      cout << "Stock		: " << temp->jmlh << endl;
      cout << "===============================================================" << endl;
      cout << "Masukkan Kode Barang Yang ingin di beli : ";
      cin >> Kode;
      cout << endl;

      temp = brg;
      while (temp != NULL && temp->kode != Kode) {
				temp = temp->next;
      }

      if (temp == NULL) {
				cout << "Kode tidak ditemukan!" << endl;
      }
    } while (temp == NULL);

    do {
      long long tarik;
      string	ulg;
      cout << "========================================================" << endl;
      cout << "Nama Barang	: " << temp->nama << endl;
      cout << "Harga		: Rp. " << temp->hrg << endl;
      cout << "Stock		: " << temp->jmlh << endl;
      cout << "Masukkan Jumlah Barang yang Ingin di Beli	: ";
			temp = temp->next;
      cin >> tarik;
      if (tarik > temp->jmlh) {
				cout << "Jumlah tidak mencukupi !" << endl << endl;
      } else {
				temp->jmlh -= tarik;
				cout << "Pembelian Berhasil !" << endl;
				cout << "========================================================" << endl << endl;
      }
    } while (temp == NULL);
  }
}

int main() {
  struct Barang *BRG = NULL;
  int		 menu;
  while (menu != 5) {
    cout << "======================== SELAMAT DATANG =======================" << endl;
    cout << "1. Input data Barang" << endl;
    cout << "2. Hapus data Barang" << endl;
    cout << "3. Tampilkan data Barang" << endl;
    cout << "4. Transaksi" << endl;
    cout << "5. Exit" << endl;
    cout << "===============================================================" << endl;
    cout << "Silahkan pilih menu : ";
    cin >> menu;
    system("cls");
    if (menu == 1) {
      insertBarang(&BRG);
    } else if (menu == 2) {
      hapusBarang(&BRG);
    } else if (menu == 3) {
      daftarBarang(BRG);
    } else if (menu == 4) {
      transaksi(BRG);
    } else if (menu == 5) {
      cout << "Silahkan datang kembali !" << endl;
    } else {
      cout << "Menu Tidak Ada !" << endl;
    }
  }

  return 0;
}