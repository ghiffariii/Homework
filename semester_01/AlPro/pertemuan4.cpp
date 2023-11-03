#include <iostream>

using namespace std;

void looping_1() {
  for (int a = 1; a <= 10; a++) {
    cout << "Index ke-" << a << " kelas B" << endl;
  }
}

void looping_2() {
  for (int x = 100; x > 0; x--) {
    cout << "Index ke-" << x << endl;
  }
}

void looping_3() {
  for (int a = 0; a < 10; a++) {
    if (a > 5) {
      cout << "Data yang lebih dari 5: " << a << endl;
    }
  }
}

void looping_4() {
  int a = 10;
  while (a > 0) {
    cout << "Data ke-" << a << endl;
    a--;
  }
}

void looping_5() {
  int a = 10;
  while (a > 0) {
    if (a > 5) {
      cout << "Data yang lebih dari 5: " << a << endl;
    }
  }
}

 void looping_6() {
  int a = 5;
  do {
    cout << "Data ke-" << a << endl;
    a++;
  } while (a > 10);
}

void looping_7() {
  int a = 10;
  int jumlah = 0;

  do {
    jumlah = jumlah + a;
    cout << a << ", ";
    a++;
  } while (a < 20);

  cout << "\nTotal jumlah semuanya: " << jumlah << endl;
}

void looping_8() {
  for (int a = 1; a < 20; a++) {
    int bil = 0;

    for (int b = 1; b <= a; b++) {
      if (a % b == 0) {
        bil = bil + 1;
      }
      if (bil == 2) {
        cout << a << " ";
      }
    }
  }
}

int main (int argc, char *argv[]) {
  // looping_1();
  // looping_2();
  // looping_3();
  // looping_4();
  // looping_5();
  // looping_6();
  // looping_7();
  looping_8();

  return 0;
}