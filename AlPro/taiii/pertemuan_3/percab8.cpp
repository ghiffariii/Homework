#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
  void percabangan_8(); {
    string jawab;

    cout << "Yakin (y/t): "; cin >> jawab;

    if (jawab == "Yakin" || jawab == "yakin")
      cout << "OK, anda yakin" << endl;
    else
      cout << "Maaf, anda tidak yakin.." << endl;

    return 0;
  }
}