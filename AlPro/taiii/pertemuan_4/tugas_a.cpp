#include <iostream>

using namespace std;

double factorial(double n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main () {
  double base, height, triangle_area, length, width, rectangle_area, block_volume;
  int choice, n;
  char next;
  
  do {
    cout << "\n              MAIN MENU             " << endl;
    cout << "#####################################\n" << endl;
    cout << "(1) Displays prime numbers" << endl;
    cout << "(2) Calculating factorials" << endl;
    cout << "(3) Calculate the area of a rectangle" << endl;
    cout << "(4) Calculating the area of a triangle" << endl;
    cout << "(5) Calculate the volume of the block" << endl;
    cout << "(6) Create a triangle with *" << endl;
    cout << "(7) Create an inverted triangle with *" << endl;
    cout << "(8) Prime number checking" << endl;
    cout << "(9) Reverse numbers" << endl;
    cout << "(10) EXIT\n" << endl;
    cout << "######################################" << endl;
    cout << "Menu of your choice: (1, 2, 3, 4, 5, 6, 7, 8, 9 or 10): "; cin >> choice;

    if (choice == 1) {
      cout << "\n############# PRIMES #############" << endl;
      cout << "What is the maximum number of prime numbers? "; cin >> n;

      for(int a = 1; a < n; a++) {
          int bil = 0;
          for(int b = 1; b <= a; b++) {
            if(a % b == 0){
                bil = bil + 1;
            }
          }
          if(bil == 2) {
            cout << a << " ";
          }
        }
        cout << "\n" << endl;
    } else if (choice == 2) {
      cout << "\n############# FACTORIAL #############" << endl;
      cout << "Enter the numbers to calculate factorial: "; cin >> n;

      if (n < 0) {
        cout << "Factorial is only defined for positive integers." << endl;
      } else {
        cout << "Factorial of " << n << "! is " << factorial(n) << endl;
      }
    } else if (choice == 3) {
      cout << "\n############# Area of a Rectangle #############" << endl;
      cout << "Enter the length value of the rectangle: "; cin >> length;
      cout << "Enter the width value of the rectangle: "; cin >> width;

      rectangle_area = length * width;
      cout << "The area of the rectangle is: " << rectangle_area << endl;
    } else if (choice == 4) {
      cout << "\n############# Area of a Triangle #############" << endl;
      cout << "Enter the height value of the triangle: "; cin >> height;
      cout << "Enter the base value of the triangle: "; cin >> base;

      triangle_area = base * height / 2;
      cout << "The area of the triangle is: " << triangle_area << endl;
    } else if (choice == 5) {
      cout << "\n############# Volume of a Block #############" << endl;
      cout << "Enter the height value of the block: "; cin >> height;
      cout << "Enter the width value of the block: "; cin >> width;
      cout << "Enter the length value of the block: "; cin >> length;

      block_volume = height * width * length;
      cout << "The volume of the block is: " << block_volume << endl;
    } else if (choice == 6) {
      
    }
    cout << "It's finished (Y/N)? "; cin >> next;
  } while (next == 'Y');

  return 0;
}