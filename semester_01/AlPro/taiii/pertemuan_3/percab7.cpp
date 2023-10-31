#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
  void percabangan_7(); {
    char jawab;

    cout << "Yakin (y/t): "; cin >> jawab;

    if (jawab == 'Y' || jawab == 'y')
      cout << "OK, anda yakin" << endl;
    else
      cout << "Maaf, anda tidak yakin.." << endl;

    return 0;
  }
}