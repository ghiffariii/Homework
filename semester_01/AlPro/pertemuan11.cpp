#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

#define max 5

string data[max];
int top = 0; // posisi data saat ini, posisi yang diproses di kasir

bool isFull(){
    if(top >= max){
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
    if(top==0){
        return true;
    }else{
        return false;
    }
}

void view(){
    if(!isEmpty()){
        cout << "Data antrian nya: " << endl;
        for(int a = top-1; a>=0; a--){
            cout << a+1 << ". " << data[a] << endl;
        }
    }
    else{
        cout << "data antrian kosong" << endl;
    }
    if(!isFull()){
        cout << "data antrian full" << endl;
    }
    cout << endl;
}

void enqueue(){
    if(!isFull()){
        cout << "Masukkan data: "; cin>> data[top]; // masuk ke antrian nya / top
        top++; // klo sudah masuk di posisi top, maka yang berikut nya akan ditambah 1, jadi top + 1
    }
}

void dequeue(){
    if(!isEmpty()){
        for(int a =0; a<top-1; a++){
            data[a] = data[a+1]; // dqta yang ada di depan nya
        }
        top--; // klo proses nya penukaran nya sudah selesai, posisi nya didecrement atau dikurangi
    }
}

int main(){
    int menu;
    x:
        system("cls");
        view();
        cout << "1. Menu enqueue" << endl; // Memasukkan data ke antrian
        cout << "2. Menu dequeue" << endl; // Menghapus top dari data antrian
        cout << "Silahkan masukkan menu: "; cin >> menu;

    if(menu==1){
        //cout << "Proses masuk antrian" << endl;
        system("cls");
        enqueue();
        goto x;
    }else if(menu==2){
        //cout << "Proses antrian atau keluarkan antrian nya" << endl;
        system("cls");
        dequeue();
        goto x;
    }

    return 0;
}