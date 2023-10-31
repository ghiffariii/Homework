#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  void percabangan_11(); {
    int m = 26, n = 82;

    int min = m < n ? m:n;

    cout << "Bilangan terkecil adalah " << min << endl;
  }

  void percabangan_12(); {
    int m = 26, n = 82;

    int max = m > n ? m:n;

    cout << "Bilangan terbesar adalah " << max << endl;
  }
}