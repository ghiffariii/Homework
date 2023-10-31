#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {

  void percabangan_5 (); {
    int a, b, c, min;

    cout << "Masukkan 3 buah bilangan : ";
    cin >> a >> b >> c;

    if (a < b)
    if (a < c) min = a; //a>b and  a>c
    else min = c; //c>=a > b

    else if (b < c) min = b; //b>=a and b>c
    else min = c; //c>= b >= a

    cout << "Maksimum adalah : " << min << endl;
  }
  return 0;
}