#include <stdio.h>

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
      printf(" %i ", bilangan[i][j]);
    }
    printf("\n");
  }
  return 0;
}