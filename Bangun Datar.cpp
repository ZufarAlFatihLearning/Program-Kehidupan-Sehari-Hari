#include <iostream>
using namespace std;
int main(){
	string men1;
    int menu,angka1,angka2,angka3,a,b,c,d,e,f,g,h;
    float lingkar=3.14;
    cout<<"======================" <<endl;
    cout<<"Pilihan Bangun Datar" <<endl;
    cout<<"1. Persegi" <<endl;
    cout<<"2. Persegi Panjang" <<endl;
    cout<<"3. Segitiga" <<endl;
    cout<<"4. Trapesium" <<endl;
    cout<<"5. Lingkaran" <<endl;
    cout<<"6. Jajar Genjang" <<endl;
    cout<<"7. Layang Layang " <<endl;
    cout<<"8. Belah Ketupat " <<endl;
    cout<<"======================" <<endl;
    cout<<"Masukkan Angka 1 = ";
    cin>>angka1;
    cout<<"Masukkan Angka 2 = ";
    cin>>angka2;
    cout<<"Masukkan Angka 3 = ";
    cin>>angka3;
    cout<<"Masukkan Jenis Bangun Datar = ";
    cin>>menu;
    a=angka1*angka1;
    b=angka1*angka2;
    c=1/2*(angka1*angka2);
    d=1/2*(angka1+angka2)*angka3;
    e=lingkar*(angka1*angka1);
    f=angka1*angka2;
    g=1/2*(angka1*angka2);
    h=1/2*(angka1*angka2);
    cout<<"=======================" <<endl;
    switch(menu){
        case 1 :
        cout<<"Anda Menghitung Persegi" <<endl;
        cout<<"Dengan Luas = sisi x sisi" <<endl;
        cout<<" Hasil Dari Perhitungan Dari " <<angka1 <<" * " <<angka1 <<" Adalah " <<a;
        break;
        case 2 :
        cout<<" Anda Menghitung Persegi Panjang " <<endl;
        cout<<"Dengan Luas = Panjang x Lebar" <<endl;
        cout<<"Hasil Dari Perhitungan Dari" <<angka1 <<" * " <<angka2 <<" Adalah " <<b;
        break;
        case 3 :
        cout<<"Anda Menghitung Segitiga" <<endl;
        cout<<"Dengan Luas = 1/2 x (alas x tinggi ) " <<endl;
        cout<<"Hasil Dari Perhitungan Dari" <<"  1/2 * " <<angka1 <<" * " <<angka2 <<" Adalah " <<c;
        break;
        case 4 :
        cout<<"Anda Menghitung Luas Trapesium" <<endl;
        cout<<"Dengan Luas = 1/2 x ( Sisi 1 + Sisi 2 ) x Tinggi" <<endl;
        cout<<"Hasil Dari Perhitungan Dari " <<" 1/2 x " <<angka1 <<" + " <<angka2 <<" x " <<angka3 <<" Adalah " <<d;
        break;
        case 5 :
        cout<<"Anda Menghitung Luas Lingkaran" <<endl;
        cout<<"Dengan Luas = 3,14 x (jari x jari )" <<endl;
        cout<<" Hasil Dari Perhitungan Dari " <<lingkar <<" x " << angka1 <<"x" <<angka1  <<" Adalah " <<e;
        break;
        case 6 :
        cout<<"Anda Menghitung Luas Jajar Genjang" <<endl;
        cout<<"Dengan Luas = Alas x Tinggi " <<endl;
        cout<<" Hasil Dari Perhitungan Dari " <<angka1 <<" x " <<angka2 <<" Adalah " <<f;
        break;
        case 7 :
        cout<<"Anda Menghitung Luas Layang Layang" <<endl;
        cout<<"Dengan Luas = 1/2 x ( Diagonal1 x Diagonal2 ) " <<endl;
        cout<<" Hasil Dari Perhitungan Dari" <<"1/2 x " <<angka1 <<" x " <<angka2 <<" Adalah " <<g;
        break;
        case 8 :
        cout<<"Anda Menghitung Luas Belah Ketupat" <<endl;
        cout<<"Dengan Luas = 1/2 x ( Diagonal1 x Diagonal2 ) " <<endl;
        cout<<"Hasil Dari Perhitungan Dari" <<"1/2 x " <<angka1 <<" x " <<angka2 <<" Adalah " <<h;
        break;
        default :
        cout<<"Format Tidak Sesuai";
    }
    return 0;
}
    
    
    

