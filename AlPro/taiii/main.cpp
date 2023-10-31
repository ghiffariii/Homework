#include <iostream>
#include <limits>

using namespace std;

int main ()
{
  const float phi = 3.14;
  float jari2, luas, keliling;

  cout << "Jari-jari lingkaran: ";
  cin >> jari2;
  // jari2 = 10.0;
  luas = phi * jari2 * jari2;
  keliling = 2 * phi * jari2;

  cout << "Luas lingkaran: " << luas << endl;
  cout << "Keliling lingkaran: " << keliling << endl;
}