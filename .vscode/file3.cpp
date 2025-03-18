#include <iostream>
using namespace std;

float luasPersegiPajang(float x, float y){
    return x * y;
}

float luasLingkaran(float x){
    return 3.14 * x * x;
}

int main (){
    int pilihan;
    float Panjang, Lebar, JariJari;
     do {
        cout << "==Menu==" << endl;
        cout << "1. Persegi Panjang" << endl;
        cout << "2. Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1 :
             cout << "Menghitung Luas Persegi Panjang : "<< endl;
             cout << "Masukkan Panjang : ";
             cin >> Panjang;
             cout << "Masukkan Lebar : ";
             cin >> Lebar;
             cout << "Luas Persegi Panjang : "<< luasPersegiPajang(Panjang,Lebar) << endl;
             break;

             case 2 :
             cout << "Menghitung Luas Lingkaran : "<< endl;
             cout << "Masukkan Jari-Jari : ";
             cin >> JariJari;
             cout << "Luas Lingkaran : "<< luasLingkaran(JariJari) << endl;
             break;


 
    
}