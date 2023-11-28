#include <iostream>
#include <queue>

using namespace std;

struct Mahasiswa {
  long long int NIM;
  string Nama;
};

int data_maks;
int top = 0;

bool isFull() {
  return top >= data_maks;
}

bool isEmpty() {
  return top == 0;
}

void inputMahasiswa(Mahasiswa data[]) {
  for (int i = 0; i < top; i++) {
    cout << "\nMasukkan data mahasiswa ke-" << i + 1 << ":" << endl;
    cout << "NIM: ";
    cin >> data[i].NIM;
    cout << "Nama: ";
    cin.ignore();
    getline(cin, data[i].Nama);
  }
}

void bubbleSort(Mahasiswa data[]) {
  for (int i = 0; i < top - 1; i++) {
    for (int j = 0; j < top - i - 1; j++) {
      if (data[j].NIM < data[j + 1].NIM) {
        Mahasiswa temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

void viewSorted(Mahasiswa data[]) {
  cout << "\nHasil urutan NIM dari input anda (terbesar ke terkecil):\n" << endl;
  for (int i = 0; i < top; i++) {
    cout << "(NIM: " << data[i].NIM << ", NAMA: " << data[i].Nama << ")" << endl;
  }
}

void view(Mahasiswa data[]) {
  if (!isEmpty()) {
    cout << "Data yang tersimpan: " << endl;
    for (int a = 0; a < top; a++) {
      cout << a + 1 << ". (NIM: " << data[a].NIM << ", NAMA: " << data[a].Nama << ")" << endl;
    }
  } else {
    cout << "Data kosong." << endl;
  }

  if (isFull()) {
    cout << "\nData sudah penuh." << endl;
    bubbleSort(data);
    viewSorted(data);
  }
  cout << endl;
}

void push(Mahasiswa data[]) {
  if (!isFull()) {
    cout << "Masukkan NIM: ";
    cin >> data[top].NIM;

    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, data[top].Nama);

    top++;
  } else {
    cout << "Tidak bisa menambah data, data penuh." << endl;
    system("pause");
  }
}

void pop(Mahasiswa data[]) {
  if (!isEmpty()) {
    top--;
  } else {
    cout << "Tidak ada data yang perlu dihapus." << endl;
    system("pause");
  }
}

int main() {
  cout << "Masukkan jumlah stack: ";
  cin >> data_maks;

  Mahasiswa* data = new Mahasiswa[data_maks];

  int menu;

  x:
    system("cls");
    view(data);
    cout << "1. Menu push" << endl;
    cout << "2. Menu pop" << endl;
    cout << "0. Keluar" << endl;
    cout << "\nSilahkan masukkan menu: ";
    cin >> menu;

    if (menu == 1) {
      system("cls");
      push(data);
      goto x;
    } else if (menu == 2) {
      system("cls");
      pop(data);
      goto x;
    } else if (menu == 0) {
      cout << "\nProgram telah ditutup. Terima kasih sudah menggunakan program kami :)" << endl;
      system("pause");
    } else {
      cout << "\nMenu anda tidak valid." << endl;
      system("pause");
      goto x;
    }

  delete[] data;
  return 0;
}

/*
  Nama  : Hafidz Ramadhan Ghiffari
  NIM   : 3337230071
  Kelas : B
*/