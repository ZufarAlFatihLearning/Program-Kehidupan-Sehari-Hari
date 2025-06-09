#include <iostream>
using namespace std;
int main(){
	float berat,tinggi,berattinggi; //Deklarasi Variabel dengan tipe data float
	//Menampilkan Output
	cout<<"Program Menghitung Berat Tinggi Badan" <<endl;
	cout<<"=====================================" <<endl;
	cout<<endl;
	cout<<"Masukkan Berat Anda = "; //Menampilkan Output Berat;
	cin>>berat; //Memasukkan Data Berat Yanng Diinginkan
	cout<<"Masukkan Tinggi Anda = "; //Menampilkan Output Tinggi;
	cin>>tinggi; //Memasukkan Data Tinggi Yang Diinginkan
	if(berat>90){ //Membandingkan Ukuran Berat Yang Sudah Ditentukan
		cout<<"Gemuk = " <<berat;
	}
	else if(berat>=80 && berat<90){
		cout<<"Cukup Gemuk = " <<berat;
	}
	else if(berat>=70 && berat<80){
		cout<<"Kurus" <<berat;
	}
	else if(berat>=60 && berat<80){
		cout<<"Cukup Kurus" <<berat;
	}
	else{
		cout<<" Sangat Kurus = " <<berat;
	}
	cout<<endl;
	if(tinggi>180){ //Membandingkan Tinggi Berat Yang Sudah Ditentukan
		cout<<"Raksasa = " <<tinggi;
	}
	else if(tinggi>=170 && tinggi<180){
		cout<<"Sangat Tinggi = " <<tinggi;
	}
	else if(tinggi>=160 && tinggi<170){
		cout<<"Cukup Tinggi = " <<tinggi;
	}
	else if(tinggi>=150 && tinggi<160){
		cout<<"Ideal = " <<tinggi;
	}
	else{
		cout<<"Sangat Ideal = " <<tinggi;
	}
	cout<<endl;
	berattinggi=tinggi-100;
	cout<<"Jadi Berat Badan Yang Ideal Adalah = " <<berattinggi;
	cout<<endl;
	return 0;
}
