#include <stdio.h>

void latihan1 () {
  int A, max;

  printf("Input 5 bilangan\n");
  printf("Bilangan 1: "); scanf("%i", &A);
  max = A;

  printf("Bilangan 2: "); scanf("%i", &A);
  if (A > max) {
    max = A;
  }
  printf("Bilangan 3: "); scanf("%i", &A);
  if (A > max) {
    max = A;
  }
  printf("Bilangan 4: "); scanf("%i", &A);
  if (A > max) {
    max = A;
  }
  printf("Bilangan 5: "); scanf("%i", &A);
  if (A > max) {
    max = A;
  }

  printf("\nBilangan terbesar: %i", max);

  return 0;
}
void latihan2 () {
  int A, max, i;

  printf("Input 10 bilangan\n");
  printf("Bilangan ke-1: "); scanf("%i", &A);
  max = A;
  for (i = 1; i <= 9; i++) {
    printf("Bilangan ke-%i: ", (i + 1));
    scanf("%i", &A);
    if (A > max) {
      max = A;
    }
  }

  printf("\nBilangan terbesar: %i\n", max);
  
  return 0;
}
void latihan3 () {
  int i;
  for (i = 1; i <= 5; i = i + 1) {
    printf("\nJakarta\n");
  }

  return 0;
}
void latihan4 () {
  int i;
  for (i = 1; i <= 5; i = i + 1) {
    printf("\nJakarta %i\n", i * 2);
  }

  return 0;
}
void latihan5 () {
  int i;
  printf("10 Bilangan Ganjil Pertama\n");
  for (i = 1; i <= 19; i = i + 2) {
    printf("%4i", i);
  }

  printf("\n");
  return 0;
}

main () {
  // latihan1 ();
  // latihan2 ();
  // latihan3 ();
  // latihan4 ();
  latihan5 ();
}