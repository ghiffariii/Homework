#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  for (int a = 1; a < 20; a++) {
    int bil = 0;

    for (int b = 1; b <= a; b++) {
      if(a % b == 0) {
        bil = bil + 1;
      }
      if (bil == 2) {
        cout << a << " ";
      }
    }
  }
}