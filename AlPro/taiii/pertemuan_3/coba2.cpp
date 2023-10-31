#include <iostream>

using namespace std;
int main() {
  char data = 'A1B1C1005';
  int hasil;

  hasil = (int) data - '0';

  cout << "Data = " << hasil << endl;

  return 0;
}