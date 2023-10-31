#include <iostream>
using namespace std;

int main() {
    int bil = 0;
    int jumlah_ganjil = 0;
    int jumlah_bilangan_ganjil = 0;
    double rata_rata = 0.0;

    cout << "Deret bilangan ganjil dari 0 hingga 100: ";

    while (bil <= 100) {
        if (bil % 2 != 0) {
            cout << bil << " ";
            jumlah_ganjil += bil;
            jumlah_bilangan_ganjil++;
        }
        bil++;
    }

    if (jumlah_bilangan_ganjil > 0) {
        rata_rata = jumlah_ganjil / jumlah_bilangan_ganjil;
        cout << "\nJumlah total bilangan ganjil: " << jumlah_ganjil << endl;
        cout << "Rata-rata bilangan ganjil: " << rata_rata << endl;
    } else {
        cout << "\nTidak ada bilangan ganjil dalam rentang yang diberikan." << endl;
    }

    system("pause");
    return 0;
}