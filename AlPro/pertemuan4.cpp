#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
    void percabangan_1 (); {
        int nilai;

        cout << "Masukkan nilai: "; cin >> nilai;

        if (nilai >= 90) {
            cout << "Nilai angka: A" << endl;
        } if (nilai < 90 && nilai > 60) {
            cout << "Nilai angka: B" << endl;
        } else {
            cout << "Maaf anda tidak lulus" << endl;
        }
    }
    void percabangan_2 (); {
        int nilai;

        cout << "Masukkan nilai: "; cin >> nilai;

        if (nilai%2 == 0) {
            cout << "Nilai " << nilai << " adalah nilai Genap" << endl;
        } else {
            cout << "Nilai " << nilai << " adalah nilai Ganjil" << endl;
        }
    }
    void percabangan_3 (); {
        int gol;
        cout << "Masukkan gol: "; cin >> gol;

        switch (gol) {
            case 1: cout << "Gaji = 100" << endl;
            break;

            case 2: cout << "Gaji = 200" << endl;
            break;

            case 3: cout << "Gaji = 300" << endl;
            break;

            case 4: cout << "Gaji = 400" << endl;
            break;
        }
    }
    void percabangan_4 (); {
        double a, b, c, max;

        cout << "Masukkan 3 buah bilangan: "; cin >> a >> b >> c;

        if (a > b)
        if (a > c) max = b; 
        else max = c;

        else if (b > c) max = b;
        else max = c;

        cout << "Nilai maksimum adalah: " << max << endl;
    }
    void percabangan_5 (); {
        double a, b, c, min;

        cout << "Masukkan 3 buah bilangan: "; cin >> a >> b >> c;

        if (a < b)
        if (a < c) min = b; 
        else min = c;

        else if (b < c) min = b;
        else min = c;

        cout << "Nilai minimum adalah: " << min << endl;
    }
    void percabangan_6 (); {
        int a, b, c;

        cout << "Masukkan tiga buah bilangan: "; cin >> a >> b >> c;
        cout << "Nilai tertinggi adalah: ";

        if((a >= b) && (a >= c)) cout << a << endl;
        if((b >= a) && (b >= c)) cout << b << endl;
        if((c >= a) && (c >= b)) cout << c << endl;
    }
    void percabangan_7 (); {
        char jawab;

        cout << "Yakin? (y/n) "; cin >> jawab;

        if (jawab == 'y' || jawab == 'Y')
            cout << "OK, anda yakin" << endl;
        else
            cout << "Maaf, anda tidak yakin.." << endl;

        return 0;
    }
    void percabangan_8 (); {
        string jawab;

        cout << "Yakin? (y/n) "; cin >> jawab;

        if (jawab == "yakin" || jawab == "Yakin")
            cout << "OK, anda yakin" << endl;
        else
            cout << "Maaf, anda tidak yakin.." << endl;
    }
    void percabangan_9 (); {
        char status;
        int grade;

        cout << "Masukkan Grade: ";  cin >> grade;

        status = (grade >= 60)? 'L' : 'G';

        cout << status << endl;
    }
    void percabangan_10 (); {
        string status;
        int grade;

        cout << "Masukkan Grade: ";  cin >> grade;

        status = (grade >= 60)? "Lulus" : "Gak lulus";

        cout << status << endl;
    }
    void percabangan_11 (); {
        int m = 26, n = 82;
        int min = m < n? m : n;

        cout << "Bilangan terkecil adalah " << min << endl;
    }
    void percabangan_12 (); {
        int m = 26, n = 82;
        int max = m > n? m : n;

        cout << "Bilangan tebesar adalah " << max << endl;
    }

    return 0;
}