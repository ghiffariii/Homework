#include <iostream>

using namespace std;

int main() {
  int i, j;
  int bilangan[2][3];
  bilangan[0][0] = 100;
  bilangan[0][1] = 101;
  bilangan[0][2] = 102;
  bilangan[1][0] = 110;
  bilangan[1][1] = 111;
  bilangan[1][2] = 112;

  // Menampilkan bentuk matriks
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      cout << bilangan[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}