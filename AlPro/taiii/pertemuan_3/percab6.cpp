#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  void percabangan_6(); {
    int a, b, c;

    cout << "Masukkan 3 buah bilangan : ";
    cin >> a >> b >> c;

    cout << "Nilai tertinggi adalah : ";

    if((a>=b) && (a>=c)) cout << a << endl;
    if((b>=a) && (b>=c)) cout << b << endl;
    if((c>=a) && (c>=b)) cout << c << endl;
  }
}