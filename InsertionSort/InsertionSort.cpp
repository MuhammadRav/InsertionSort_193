#include <iostream>
using namespace std;

int arr[20];                                       // Membuat Array dengan panjang data 20
int n;                                             // Membuat Variable inputan n

void input() {                             // procedure input
    while (true)
    {
        cout << "Masukkan jumlah data pada array : "; // Membuat inputan jumlah element Array
        cin >> n;                                      // Memanggil Variable inputan n
        
        if (n <= 20) {                                 // Membuat Kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan Pesan jika data lebih dari 20
        }
    }
    cout << endl;
    cout << "======================" << endl;       // Membuat jarak per baris program
    cout << "Masukkan Element Array" << endl;       // Membuat tampilan susunan data element array
    cout << "======================" << endl;
}
