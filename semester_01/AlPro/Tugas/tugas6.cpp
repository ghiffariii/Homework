#include <iostream>

using namespace std;

void array() {
	int a=1;
	int menu;
	do {
		cout << "Silahkan pilih menu (1/2/3/4): "; cin >> menu;
		if(menu == 1) {
			int baris, kolom;
			cout << "Masukan jumlah baris: "; cin >> baris;
			cout << "Masukan jumlah kolom: "; cin >> kolom;
			
			int data[baris][kolom];
			for(int i = 0; i < baris; i++){
				for(int j = 0; j < kolom; j++){
					cout << "data ke {" << i << "} {" << j << "}" << ": "; cin >> data[i][j];
				}	
			}
			cout << endl;
			for(int i = 0; i < baris; i++) {
				for(int j = 0; j < kolom; j++){
					cout << "data ke {" << i << "} {" << j << "}" << ": " << data[i][j] << endl;
				}	
			}
			cout << endl;
		}
		
		else if(menu == 2) {
			int baris, kolom, n;
			cout << "Masukan jumlah baris: "; cin >> baris;
			cout << "Masukan jumlah kolom: "; cin >> kolom;
			
			int data[baris][kolom];
			for(int i = 0; i < baris; i++) {
				for(int j = 0; j < kolom; j++) {
					cout << "data ke {" << i << "} {" << j << "}" << ": "; cin >> data[i][j];
				}	
			}
			cout << endl;
			cout << "Masukan nilai perkalian: "; cin >> n;
			cout << endl;
			for(int i = 0; i < baris; i++) {
				for(int j = 0; j < kolom; j++) {
					cout << "data ke {" << i << "} {" << j << "}" << ": " << data[i][j] * n << endl;
				}	
			}
			cout << endl;
		}
		
		else if(menu == 3) {
			int baris, kolom;
			double ratarata, total;
			int sum = 0;
			cout << "Masukan jumlah baris: "; cin >> baris;
			cout << "Masukan jumlah kolom: "; cin >> kolom;
			total = baris * kolom;
			int data[baris][kolom];
			for(int i = 0; i < baris; i++){
				for(int j = 0; j < kolom; j++){
					cout << "data ke {" << i << "} {" << j << "}" << ": "; cin >> data[i][j];
				}	
			}
			cout << endl;
			for(int i = 0; i < baris; i++){
				for(int j = 0; j < kolom; j++){
					cout << "data ke {" << i << "} {" << j << "}" << ": " << data[i][j] << endl;
					sum += data[i][j];
				}	
			}
			cout << "Total: " << sum << endl;
			ratarata = sum / total;
			cout << "Rata-rata: " << ratarata << endl;
		}
		
		else if(menu == 4) {
			int temp[1];
    		int data[1];
    		cout << "masukkan bilangan : " << flush; cin >> temp[1];
    		system("clear");
    		cout << "Silahkan pilih menu (1/2/3/4): 4" << endl;
    		cout << "masukkan bilangan : "; cin >> data[1];
    		cout << "hasilnya dari " << temp[1] << " * " << data[1] << " = " << temp[1] * data[1] << endl;
		}
		
		else if(menu == 5){
			exit(0);
		}
		else{
			cout << "pilihan anda salah" <<endl;
		}
	}
	while(a > 0);
}

int main() {
  array();
}