#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int a = 10;
  int jumlah = 0;

  do {
    jumlah = jumlah + a;
    cout << a << ", ";
    a++;
  }
  while(a < 20);
  cout << "\nTotal jumlah semuanya: " << jumlah << endl;

  return 0;
}