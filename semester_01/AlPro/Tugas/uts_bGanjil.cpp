#include <iostream>
#include <cmath>

using namespace std;

void menuUtama() {
  int menu;
  cout << "\nSilahkan Pilih Menu: " << endl;
  cout << "1. Menghitung jarak antara dua titik pada koordinat kartesius" << endl;
  cout << "2. Menampilkan perkalian bilangan genap untuk deret faktorial dengan n minimum 30" << endl;
  cout << "3. Menghitung jumlah karakter yang sama dalam dua string" << endl;
  cout << "4. Mengurutkan NIM dan nama mahasiswa" << endl;
  cout << "5. Keluar" << endl;
}

void hitungKartesius() {
  double x1, y1, x2, y2;
  cout << "Masukkan koordinat x titik pertama: ";
  cin >> x1;
  cout << "Masukkan koordinat y titik pertama: ";
  cin >> y1;
  cout << "Masukkan koordinat x titik kedua: ";
  cin >> x2;
  cout << "Masukkan koordinat y titik kedua: ";
  cin >> y2;

  double jarak = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  cout << "Jarak antara dua titik adalah " << jarak << " satuan." << endl;
}

void perkalianGenapFaktorial() {
    int n;
    do {
        cout << "Masukkan nilai n (minimal 30): ";
        cin >> n;
    } while (n < 30);

    int bilanganGenap = (n % 2 == 0) ? n - 2 : n - 1;

    long long faktorial = 1;
    string deret = "";

    while (bilanganGenap >= 2) {
        faktorial *= bilanganGenap;
        deret += to_string(bilanganGenap);
        if (bilanganGenap != 2) {
            deret += " * ";
        }
        bilanganGenap -= 2;
    }

    cout << deret << " = " << faktorial << endl;
}

void hitungKarakterSama() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    char huruf[100];  // Array untuk menyimpan huruf-huruf yang dimasukkan
    int jumlah[26] = {0};  // Array untuk menghitung jumlah huruf A-Z

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> huruf[i];

        // Mengonversi huruf ke indeks array (A=0, B=1, ..., Z=25)
        int indeks = huruf[i] - 'A';

        // Menghitung jumlah huruf yang sama
        jumlah[indeks]++;
    }

    cout << "Jumlah huruf yang sama:" << endl;
    
    // Mencetak jumlah huruf yang sama
    for (int i = 0; i < 26; i++) {
        if (jumlah[i] > 0) {
            char huruf = 'A' + i;  // Mengonversi indeks kembali ke huruf
            cout << huruf << "=" << jumlah[i] << " ";
        }
    }
    cout << endl;
}

void inputMahasiswa(int n, int nim[], string nama[]) {
  for (int i = 0; i < n; i++) {
    cout << "Masukkan data mahasiswa ke-" << i + 1 << ":" << endl;
    cout << "NIM: ";
    cin >> nim[i];
    cout << "NAMA: ";
    cin.ignore(); // Membersihkan karakter newline dalam buffer
    getline(cin, nama[i]);
  }
}

void urutkanMahasiswa(int n, int nim[], string nama[]) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (nim[j] > nim[j + 1]) {
        // Tukar NIM
        int tempNIM = nim[j];
        nim[j] = nim[j + 1];
        nim[j + 1] = tempNIM;

        // Tukar Nama
        string tempNama = nama[j];
        nama[j] = nama[j + 1];
        nama[j + 1] = tempNama;
      }
    }
  }
}

void tampilkanHasil(int n, int nim[], string nama[]) {
  cout << "Hasil akhir setelah diurutkan berdasarkan NIM adalah:" << endl;
  for (int i = 0; i < n; i++) {
      cout << "(NIM: " << nim[i] << " NAMA: " << nama[i] << ")" << endl;
  }
}

void urutMahasiswaDanNIM() {
  int n;
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> n;

  int nim[100];
  string nama[100];

  inputMahasiswa(n, nim, nama);
  urutkanMahasiswa(n, nim, nama);
  tampilkanHasil(n, nim, nama);
}

int main() {
  int menu;

  while (true) {
    menuUtama();

    cout << "Pilihan Anda (1/2/3/4/5): ";
    cin >> menu;

    if (menu == 1) {
      hitungKartesius();
    } else if (menu == 2) {
      perkalianGenapFaktorial();
    } else if (menu == 3) {
      hitungKarakterSama();
    } else if (menu == 4) {
      urutMahasiswaDanNIM();
    } else if (menu == 5) {
      cout << "Terima kasih, program selesai." << endl;
      return 0;
    } else {
      cout << "Pilihan tidak valid. Silakan pilih menu yang benar." << endl;
    }
  }
  return 0;
}