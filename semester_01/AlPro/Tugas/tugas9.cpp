#include <iostream>
#include <cmath>
#include <array>
#include <string>

using namespace std;

float jarak(float *ptr_x1, float *ptr_x2, float *ptr_y1, float *ptr_y2) {
  float  hasil = pow(*ptr_x2 - *ptr_x1,2) + pow( *ptr_y2 - *ptr_y1,2);
  return sqrt(hasil);
}

void menu_1() {
  float x1,x2,y1,y2; 

  cout << "Masukkan koordinat : " << endl;
  cout << "x1 : ";cin >>  x1;
  cout << "x2 : ";cin >>  x2;
  cout << "y1 : ";cin >>  y1;
  cout << "y2 : ";cin >>  y2;
    
  cout << "jarak  : " << jarak(&x1,&x2,&y1,&y2) << endl;    
}

void menu_2() {
  int n;
  cout << "Masukkan deret : ";cin >> n;

  int *ptr_n = &n;
  unsigned long long pro = 1;
  for (int i = *ptr_n; i>=1; i--) {
    if (i % 2 == 0) {
      pro = pro * i;
      cout << i << "*";
    }
  }
  cout << " : " << pro << endl;
  cout << endl;
}

void menu_3() {
  int n;
  cout << "Masukkan jumlah data :  "; cin >> n;
  char data[n];

  for(int i=0;i<n;i++) {
    cout << "Masukkan data [" << i+1 << "] : "; cin >> data[i];
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n-1;j++) {
      char *ptr_data= &data[j];
      char *ptr_data_next= &data[j+1];

      if(*ptr_data> *ptr_data_next) {
        char temp = *ptr_data;
        *ptr_data= *ptr_data_next;
        *ptr_data_next = temp;
      }
    }
  }
    
  for(int i=0;i<n;i++) {
    int p=1;
    for(int j=i+1;j<n;j++) {
      if(data[i]== data[j]) {
        p++;
      }
    }
    if(data[i]==data[i-1]) {
      continue;
    }
    cout << data[i]  << " : "<< p << endl;
  }
}

void  menu_4() {
  int n;
  cout << "Masukkan jumlah mahasisiwa : ";cin >> n;
  int  nim[n];
  string nama[n];

  cout << endl;

  for(int i=0;i<n;i++){
    cout << "Mahasiswa  ke- " << i+1 << endl;;
    cout << "NIM [" << 0 << "] : "; cin >> nim[i];
    cout << "NAMA[" << 1 << "] : "; cin >> nama[i];
    cout << endl;
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<n-1;j++) {
      int *ptr_nim = &nim[j];
      int *ptr_nim_next = &nim[j+1];

      string *ptr_nama = &nama[j];
      string *ptr_nama_next = &nama[j+1];

      if(*ptr_nim< *ptr_nim_next) {
        int temp = *ptr_nim;
        *ptr_nim= *ptr_nim_next;
        *ptr_nim_next = temp;

        string tempstr =  *ptr_nama;
        *ptr_nama = *ptr_nama_next;
        *ptr_nama_next= tempstr;
      }
    }
  }
    
  for(int i =0;i<n;i++) {
    cout << "NIM :" << nim[i];
    cout << "\tNAMA :" << nama[i];
    cout << endl;
  }
  cout  << endl;
}

int main(){
  int a=1;
  int menu;
  do {
    cout << "1. Menghitung jarak antara dua buah titik pada koordinat kartesius" << endl;
    cout << "2. Menampilkan perkalian bilangan genap  untuk deret faktorial dengan minimum n=30" << endl;
    cout << "3. Menghitung jumlah karakter yang sama " << endl;
    cout << "4. Mengurutkan NIM  dan nama mahasiswa " << endl;
    cout << "5. Keluar" << endl;
    cout << "Silahkan pilih menu(1/2/3/4/5): ";cin >> menu;
        
    if(menu == 1) {
      menu_1();
    } else if(menu == 2) {
      menu_2();
    } else if(menu == 3) {
      menu_3();
    } else if(menu == 4) {
      menu_4();
    } else if(menu == 5) {
      break;
    }
  }
  while(a>0);

  return 0;
}