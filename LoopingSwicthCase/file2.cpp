#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;
    int PerualanganWhile;
    int PerulanganDO;

    srand (time(0));
    x = rand() % 10;
    cout << "Prtulangan While " << x << endl;
    cout << "Nilai x awal = " << x << endl;

    while (x < 7)
    {
        cout << "Nilai x awal = " << x << endl;
        x = rand() % 10;
        PerualanganWhile++;
    }
    cout << "Nilai x terakhir = " << x << endl;
    cout << "Jumlah perulangan = " << PerualanganWhile << endl;

    cout << endl;

    cout << "Prtulangan DO While : " << x << endl;
    do {
        cout << "Nilai x = " << x << "Lari Keliling" << endl;
        x = rand() % 10;
        PerulanganDO++;
    }while ( x < 7);
    
    cout << "Nilai x terakhir = " << x << endl;
    cout << "Jumlah Perulangan Do While = " << PerulanganDO << endl;

} 