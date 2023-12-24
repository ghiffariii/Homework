#include <iostream>
#include <cmath>

using namespace std;

void fungsiptr(int *ptr){
	cout << *ptr << endl;
	cout << ptr << endl;
}

void fb(int a){
	cout<<"a: "<<a<<endl;
}

int main(){
	int a = 10;
	int *ptrA = &a;
	int &c = a;

	cout<<"Nilai a: "<<a<<endl;
	cout<<"Alamat a: "<<ptrA<<endl;

	cout<<"Nilai c: "<<c<<endl;
	cout<<"Alamat c: "<<&c<<endl;

	c = 5;

	cout<<"Nilai a: "<<a<<endl;
	cout<<"Alamat a: "<<ptrA<<endl;

	cout<<"Nilai c: "<<c<<endl;
	cout<<"Alamat c: "<<&c<<endl;

	fb(10);
	fungsiptr(ptrA);

	return 0;
}