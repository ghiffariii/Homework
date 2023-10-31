#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  char jawaban;
  cout << "Adakah tukang ketoprak? (y/n): "; cin >> jawaban;

  if(jawaban == 'y' || jawaban == 'Y'){
    cout << "Telor gulung 1" << endl;
  } else {
    cout << "Telor gulung 5" << endl;
  }

  return 0;
}