#include <iostream>
#include <limits>

using namespace std;

int main ()
{
  float tinggi, alas, luas;

  // Input Tinggi
  cout << "Tinggi segitiga: ";
  cin >> tinggi;

  // Input Alas
  cout << "Alas segitiga: ";
  cin >> alas;

  // Rumus
  luas = alas * tinggi / 2;
  cout << "Luas Segitiga: " << luas << endl;
}