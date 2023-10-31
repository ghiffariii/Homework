#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

  void percabangan_4 (); {
    int a, b, c, max;

    cout << "Masukkan 3 buah bilangan : ";
    cin >> a >> b >> c;

    if (a > b)
    if (a > c) max = a; //a>b and  a>c
    else max = c; //c>=a > b

    else if (b > c) max = b; //b>=a and b>c
    else max = c; //c>= b >= a

    cout << "Maksimum adalah : " << max << endl;
  }
  return 0;
}