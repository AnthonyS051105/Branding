//Kalkulator Penghitung Luas Bidang 2 Dimensi (persegi, perseegi panjang, segitiga, lingkaran, layang-layang, jajargenjang, belah ketupat)
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float operasi1, operasi2, operasi3, hasil;
	char angka;
	
	cout<<"Pilih luas yang akan dihitung:"<<endl; 
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi panjang dan Jajargenjang"<<endl;
	cout<<"3. Segitiga"<<endl;
	cout<<"4. Lingkaran"<<endl;
	cout<<"5. Trapesium"<<endl;
	cout<<"6. Layang-layang dan Belah ketupat"<<endl;
	cout<<"7. Oval/ elips"<<endl;
	cout<<"8. Segi lima"<<endl;
	cout<<"9. Segi enam"<<endl;
		
	cout<<"Masukkan angka sesuai dengan luas yang akan dihitung ";
	cin>>angka;
	
	switch(angka){
		case '1':
			cout<<"Masukkan sisi persegi: ";
			cin>>operasi1;
			
			hasil=pow(operasi1, 2);
			cout<<"Jadi luas persegi tersebut adalah "<<hasil<<endl;
			break;

		case '2':
			cout<<"Masukkan panjang: ";
			cin>>operasi1;
			
			cout<<"Masukkan lebar: ";
			cin>>operasi2;
			
			hasil=operasi1*operasi2;
			cout<<"Jadi luas persegi panjang/ jajargenjang tersebut adalah "<<hasil<<endl;
			break;
			
		case '3':
			cout<<"Masukkan alas: ";
			cin>>operasi1;
			
			cout<<"Masukkan tinggi: ";
			cin>>operasi2;
			
			hasil=0.5*operasi1*operasi2;
			cout<<"Jadi luas segitiga tersebut adalah "<<hasil<<endl;
			break;
		
		case '4':
			cout<<"Masukkan jari-jari: ";
			cin>>operasi1;
			
			hasil= M_PI*pow(operasi1, 2);
			cout<<"Jadi luas lingkaran tersebut adalah "<<hasil<<endl;
			break;
		
		case '5':
			cout<<"Masukkan sisi atas trapesium: ";
			cin>>operasi1;
			
			cout<<"Masukkan sisi bawah trapesium: ";
			cin>>operasi2;
			
			cout<<"Masukkan tinggi trapesium: ";
			cin>>operasi3;
			
			hasil=0.5*(operasi1+operasi2)*operasi3;
			cout<<"Jadi luas trapesium tersebut adalah "<<hasil<<endl;
			break;
			
		case '6':
			cout<<"Masukkan panjang diagonal 1: ";
			cin>>operasi1;
			
			cout<<"Masukkan panjang diagonal 2: ";
			cin>>operasi2;
			
			hasil=0.5*operasi1*operasi2;
			cout<<"Jadi luas layang-layang/ belah ketupat tersebut adalah "<<hasil<<endl;
			break;
			
		case '7':
			cout<<"Masukkan sumbu minor: ";
			cin>>operasi1;
			
			cout<<"Masukkan sumbu mayor: ";
			cin>>operasi2;
			
			hasil= M_PI*operasi1*operasi2;
			cout<<"Jadi luas elips tersebut adalah "<<hasil<<endl;
			break;
			
		case '8':
			cout<<"Masukkan sisi segi lima: ";
			cin>>operasi1;
			
			hasil= 1.25*pow(operasi1, 2)*(1/tan(M_PI/5));
			cout<<"Jadi luas segi lima tersebut adalah "<<hasil<<endl;
			break;
			
		case '9':
			cout<<"Masukkan sisi segi enam: ";
			cin>>operasi1;
			
			hasil=1.5*sqrt(3)*pow(operasi1, 2);
			cout<<"Jadi luas segi enam tersebut adalah "<<hasil<<endl;
			break;
		
		default :
			cout<<"Angka yang anda masukkan tidak tersedia dalam pilihan."<<endl;
	}
	
	return 0;
}
