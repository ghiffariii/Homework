#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int a = 10;
  while(a > 0) {
    if(a > 5) {
      cout << "Data yang lebih dari 5: " << a << endl;
    }
    a--;
  }

  return 0;
}