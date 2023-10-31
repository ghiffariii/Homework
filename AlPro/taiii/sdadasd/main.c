#include <stdio.h>
#include <string.h>

int main ()
{
  char nim[10], nama[100];
  float nilai;

  printf("INPUT DATA MAHASISWA\n");
  printf("NIM : "); scanf("%s", &nim);

  fflush (stdin);
  printf("NAMA : "); gets(nama);
  printf("NILAI : "); printf("%f", &nilai);

  // if(strlen(nim) != 9) {
  //   printf("NIM anda tidak valid.");

  //   return 1;
  // }

  printf("\nNIM : %s", nim);
  printf("\nNAMA : %s", nama);
  printf("\nNILAI : %f", nilai);

  return 0;
}