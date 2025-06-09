#include <iostream>
#include <string>
using namespace std;

int main() {
    string namabarang[100]; 
    int jumlahbarang[100];
    long int hargabarang[100]; 
    long int totalitem = 0; 
    int totalbarang = 0; 
    int kodebarang;

    cout << "Mesin Kasir Alfamaret X" << endl;
    cout << "=======================" << endl;

    cout << "Masukkan Jumlah Barang yang ingin dibeli: ";
    cin >> totalbarang;

    for (int i = 0; i < totalbarang; i++) {
        cout << "Masukkan Kode Barang " << (i + 1) << ": ";
        cin >> kodebarang;

        cout << "Masukkan Nama Barang " << (i + 1) << ": ";
        cin.ignore(); 
        getline(cin, namabarang[i]); 

        cout << "Masukkan Jumlah Barang " << (i + 1) << ": ";
        cin >> jumlahbarang[i];

        cout << "Masukkan Harga Barang Ke " << (i + 1) << ": Rp ";
        cin >> hargabarang[i];

        
        totalitem += jumlahbarang[i] * hargabarang[i];
    }

    cout << endl;
    cout << "Total Harga Adalah = Rp " << totalitem << endl;

    long int diskon;
    if (totalitem < 100000) {
        cout << "Tidak Mendapat Diskon = Rp " << totalitem << endl;
    } else if (totalitem >= 100000 && totalitem <= 500000) {
        diskon = totalitem * 0.1;
        cout << "Mendapat Diskon 10% Menjadi = Rp " << (totalitem - diskon) << endl;
    } else if (totalitem > 500000 && totalitem <= 1000000) {
        diskon = totalitem * 0.2;
        cout << "Mendapat Diskon 20% Menjadi = Rp " << (totalitem - diskon) << endl;
    } else {
        diskon = totalitem * 0.3;
        cout << "Mendapat Diskon 30% Menjadi = Rp " << (totalitem - diskon) << endl;
    }

    return 0;
}

