 #include <iostream>
using namespace std;
int main(){
	string nama;
	int nim,umur;
	cout<<"Alat Ukur Menghitung Umur Manusia" <<endl;
	cout<<"=================================" <<endl;
	cout<<endl;
	cout<<"Masukkan Nama Anda = ";
	cin>>nama;
	cout<<"Masukkan Nim Anda = ";
	cin>>nim;
	cout<<"Masukkan Umur Anda = ";
	cin>>umur;
	if(umur<8){
		cout<<"Masa Balita = " <<umur;
	}
	else if(umur>=8 && umur<=12){
		cout<<"Masa Pra Remaja = " <<umur;
	}
	else if(umur>=12 && umur<=18){
		cout<<"Masa Remaja = " <<umur;
	}
	else if(umur>=19 && umur<=25){
		cout<<"Masa Pra Dewasa = " <<umur;
	}
	else if(umur>=26 && umur<=40){
		cout<<"Masa Dewasa = " <<umur;
	}
	else if(umur>=41 && umur<=70){
		cout<<"Masa Tua = " <<umur;
	}
	return 0;
}
