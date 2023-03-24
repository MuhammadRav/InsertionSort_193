#include <iostream>
using namespace std;

int arr[20];                                       // Membuat Array dengan panjang data 20
int n;                                             // Membuat Variable inputan n

void input() {                             // procedure input
    while (true)
    {
        cout << "Masukkan jumlah data pada array : "; // Membuat inputan jumlah element Array
        cin >> n;                                      // Memanggil Variable inputan n
        
        if (n <= 20) {                                 // Membuat Kondisi n tidak lebih dari sama dengan 20
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


    for (int i = 0; i < n; i++)                     // Menggunakan perulangan for untuk menyimpan data pada array
    {  
        cout << "Data ke-" << (i + 1) << ": ";      // Memasukkan atau menginputkan nilai data n
        cin >> arr[i];                              // Menyimpan nilai data n kedalam array arr
    }
}

void insertionsort() {          // Procedure Insertionsort

    int temp;                   // Membuat variable data temporer atau menyimpan sementara
    int j;                      // Membuat variavle j sebagai penanda

    for (int i = 1; i < n; i++) {   // 1, looping dengan i dimulai dari i hingga n-1

        temp = arr[i];              // 2. simpan nilai arr[i] ke variable sementara temp

        j = i - 1;                  // 3. setting nilai j sama dengan i-1;

        while (j >= 0 && arr[j] > temp)     // 4. looping while dimana nilai j lebih besar sama dengan 0 dan
                                            // arr[j] lebih besar daripada temp
        {
            arr[j + 1] = arr[j];            // 4a. simpan arr[j] ke dalam variable arr[j+1]
            j--;                            // 4b. Decrement nilay j by 1
        }

        arr[j + 1] = temp;                  // 5. simpan nilai temp ke dalam arr[j+1]


        cout << "\nPass " << i << ": ";     // output ke layar
        for (int k = 0; k < n; k++) {       // looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";
        }
    }
}

void display() {
    cout << endl;
    cout << "\n=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "==================================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl
    }
    cout << endl;
}