#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

void array1 () {
  int data[5];
  data[0] = 1;
  data[1] = 1;
  data[2] = 2;
  data[3] = 3;
  data[4] = 4;

  cout << data[3] << endl;
}

int main() {
  array1();
}