#include <iostream>
#include <string>
#include <vector>
#include <iomanip> 
using namespace std;

int main() {
    int pilihan;
    cout << "====== Web Akademik =============" << endl;
    cout << "1. Sistem Penghitungan Nilai Mahasiswa" << endl;
    cout << "2. Isi Biodata" << endl;
    cout << "Masukkan Nomor Pilihan (1 - 2): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: {
            int jumlahMatkul;
            cout << "========= Sistem Penghitungan Nilai Akhir Mahasiswa =========== " << endl;
            cout << "Masukkan Jumlah Mata Kuliah yang Dihitung: ";
            cin >> jumlahMatkul;
            cin.ignore();

            vector<string> matkul(jumlahMatkul);
            vector<int> hadir(jumlahMatkul);
            vector<int> tugas(jumlahMatkul);
            vector<int> uts(jumlahMatkul);
            vector<int> uas(jumlahMatkul);

            cout << "======== Hasil Awal ========" << endl;
            for (int i = 0; i < jumlahMatkul; i++) {
                cout << "===========================" << endl;
                cout << "Masukkan Nama Mata Kuliah Ke " << i + 1 << ": ";
                getline(cin, matkul[i]);

                cout << "Masukkan Nilai Hadir Mata Kuliah Ke " << i + 1 << ": ";
                cin >> hadir[i];
                cout << "Masukkan Nilai Tugas Mata Kuliah Ke " << i + 1 << ": ";
                cin >> tugas[i];
                cout << "Masukkan Nilai UTS Mata Kuliah Ke " << i + 1 << ": ";
                cin >> uts[i];
                cout << "Masukkan Nilai UAS Mata Kuliah Ke " << i + 1 << ": ";
                cin >> uas[i];
                cin.ignore(); 
                cout << endl;
            }

            cout << endl;
            cout << "========= Hasil Akhir ============" << endl;
            for (int i = 0; i < jumlahMatkul; i++) {
                cout << "=================================" << endl;
                cout << "Nama Mata Kuliah Ke " << i + 1 << ": " << matkul[i] << endl;
                cout << "Nilai Hadir Mata Kuliah " << i + 1 << " (" << matkul[i] << "): " << hadir[i] << endl;
                cout << "Nilai Tugas Mata Kuliah " << i + 1 << " (" << matkul[i] << "): " << tugas[i] << endl;
                cout << "Nilai UTS Mata Kuliah " << i + 1 << " (" << matkul[i] << "): " << uts[i] << endl;
                cout << "Nilai UAS Mata Kuliah " << i + 1 << " (" << matkul[i] << "): " << uas[i] << endl;

                double hasil = (hadir[i] * 0.2) + (tugas[i] * 0.4) + (uts[i] * 0.3) + (uas[i] * 0.2);
                cout << "Hasil Akhir Nilai Mata Kuliah " << i + 1 << " (" << matkul[i] << "): " << hasil << endl;
            }
            break;
        }

        case 2: {
            string nama, jurusan, tempat;
            int nim, lahir;
            cout << "============ Biodata Anda ============" << endl;
            cout << "Masukkan Nama Anda: ";
            getline(cin, nama);
            cout << "Masukkan NIM Anda: ";
            cin >> nim;
            cin.ignore(); 
            cout << "Masukkan Jurusan Anda: ";
            getline(cin, jurusan);
            cout << "Masukkan Tanggal Lahir Anda : ";
            cin >> lahir;
            cin.ignore(); 
            cout << "Masukkan Tempat Lahir Anda: ";
            getline(cin, tempat);

            cout << "\n===== Biodata Anda =====" << endl;
            cout << "Nama Anda          : " << nama << endl;
            cout << "NIM Anda           : " << nim << endl;
            cout << "Jurusan Anda       : " << jurusan << endl ;
            cout << "Tanggal Lahir Anda : " << lahir << endl;
            cout << "Tempat Lahir Anda  : " << tempat << endl;
            break;
        }

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
