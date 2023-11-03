#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

void array1() {
  int data[5];

  data[0]=1;
  data[1]=1;
  data[2]=3;
  data[3]=5;
  data[4]=8;

  cout << data[3] << endl;
}

void array2() {
  char data[5];

  data[0] = 'a';
  data[1] = 'v';
  data[2] = 'b';
  data[3] = 'f';
  data[4] = 'r';

  cout << data[3] << endl;
}

void array3() {
  string data[5];

  data[0] = "data1";
  data[1] = "data2";
  data[2] = "data3";
  data[3] = "data4";
  data[4] = "data5";

  cout << data[3] << endl;
}

void array4() {
  int data[10];
  
  for(int i = 0; i < 10; i++) {
    data[i] = rand();
    cout << "data ke " << i + 1 << " adalah " << data[i] <<endl;
  }
}

void array5() {
  int n;

  cout << "masukan banyak data: "; cin >> n;

  int data[n];

  for(int i = 0; i < n; i++) {
    cout << "data ke: " << i << " adalah "; cin >> data[i];
  }
  cout << endl;

  for(int i = 0; i < n; i++) {
    cout << "data ke: " << i + 1 << " adalah " << data[i] << endl;
  }
}

int main() {
  // array1();
  // array2();
  // array3();
  // array4();
  array5();
}