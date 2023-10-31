#include <iostream>
#include <limits>

using namespace std;

int main ()
{
  // Size of Type Data
  cout << "Ukuran tipe dari: " << endl;
  cout << "- int: " << sizeof(int) << endl;
  cout << "- unsigned int: " << sizeof(unsigned) << endl;
  cout << "- char: " << sizeof(char) << endl;
  cout << "- unsigned char: " << sizeof(unsigned char) << endl;
  cout << "- short: " << sizeof(short) << endl;
  cout << "- unsigned short: " << sizeof(unsigned short) << endl;
  cout << "- long int: " << sizeof(long int) << endl;
  cout << "- unsigned long int: " << sizeof(unsigned long int) << endl;
  cout << "- float: " << sizeof(float) << endl;
  cout << "- double: " << sizeof(double) << endl;

  // Bilangan Minimum dan Maximum
  cout << "Bilangan Minimum dan Maximum" << endl;
  cout << "- Min int: " << static_cast<float>(std::numeric_limits<int>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<int>::max()) << endl;
  cout << "- Min uint: " << static_cast<float>(std::numeric_limits<unsigned int>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<unsigned int>::max()) << endl;
  cout << "- Min char: " << static_cast<int>(std::numeric_limits<char >::min()) << " | Max :" << static_cast<int>(std::numeric_limits<char>::max()) << endl;
  cout << "- Min uchar: " << static_cast<float>(std::numeric_limits<unsigned char>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<unsigned char>::max()) << endl;
  cout << "- Min short: " << static_cast<float>(std::numeric_limits<short>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<short>::max()) << endl;
  cout << "- Min ushort: " << static_cast<float>(std::numeric_limits<unsigned short>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<unsigned short>::max()) << endl;
  cout << "- Min long int: " << static_cast<float>(std::numeric_limits<long int>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<long int>::max()) << endl;
  cout << "- Min unsigned long int: " << static_cast<float>(std::numeric_limits<unsigned long int>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<unsigned long int>::max()) << endl;
  cout << "- Min float: " << static_cast<float>(std::numeric_limits<float>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<float>::max()) << endl;
  cout << "- Min double: " << static_cast<float>(std::numeric_limits<double>::min()) << " | Max :" << static_cast<float>(std::numeric_limits<double>::max()) << endl;
}