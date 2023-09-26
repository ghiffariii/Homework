#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  void looping_1 (); {
    for (int a = 1; a <= 10; a++) {
      cout << "Index ke-" << a << " kelas B" << endl;
    }

    return 0;
  }
  void looping_2 (); {
    for (int x = 100; x > 0; x--) {
      cout << "Index ke-" << x << endl;
    }

    return 0;
  }
  void looping_3 (); {
    for (int a = 0; a < 10; a++) {
      if (a > 5) {
        cout << "Data yang lebih dari 5: " << a << endl;
      }
    }
  }
  void looping_4 (); {
    int a = 10;
    while (a > 0) {
      cout << "Data ke-" << a << endl;
      a--;
    }

    return 0;
  }
  void looping_5 (); {
    int a = 10;
    while (a > 0) {
      if (a > 5) {
        cout << "Data yang lebih dari 5: " << a << endl;
      }
    }
  }
  void looping_6 (); {
    int a = 5;
    do {
      cout << "Data ke-" << a << endl;
      a++;
    } while (a > 10);
  }
  void looping_7 (); {
    int a = 10;
    int jumlah = 0;

    do {
      jumlah = jumlah + a;
      cout << a << ", ";
      a++;
    } while (a < 20);

    cout << "\nTotal jumlah semuanya: " << jumlah << endl;
    return 0;
  }
  void looping_8 (); {
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
}