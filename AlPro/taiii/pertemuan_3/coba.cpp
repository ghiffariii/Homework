#include <iostream>

using namespace std;
int main() {
  string nim;
  cout << "Masukkan NIM anda: "; cin >> nim;

  if (nim.length() < 3) {
    cout << "NIM anda tidak valid." << endl;

    return 1;
  }

  string lastThreeDigits = nim.substr(nim.length() - 3);
  int lastThreeDigitsInt = stoi(lastThreeDigits);

  if (lastThreeDigitsInt%2 == 0) {
    cout << "NIM anda adalah genap." << endl;
  } else {
    cout << "NIM anda adalag ganjil." << endl;
  } return 0;
}