//Kalkulator Penghitung Luas Bidang 2 Dimensi (persegi, perseegi panjang, segitiga, lingkaran, layang-layang, jajargenjang, belah ketupat)
#include <iostream> //Library untuk input atau output
#include <cmath> //library untuk beberapa operasi matematika

using namespace std;

int main(){ //fungsi utama
	float operasi1, operasi2, operasi3, hasil; //definisi untuk variabel angka
	char angka; //variabel untuk memilih luas yang akan dihitung
	
	cout<<"Pilih luas yang akan dihitung:"<<endl; 
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi panjang dan Jajargenjang"<<endl;
	cout<<"3. Segitiga"<<endl;
	cout<<"4. Lingkaran"<<endl;
	cout<<"5. Trapesium"<<endl;
	cout<<"6. Layang-layang dan Belah ketupat"<<endl;
	cout<<"7. Oval/ elips"<<endl;
	cout<<"8. Segi lima"<<endl;
	cout<<"9. Segi enam"<<endl; //Keterangan bagi user
		
	cout<<"Masukkan angka sesuai dengan luas yang akan dihitung "; 
	cin>>angka; //input luas bangun datar yang ingin dihitung
	
	switch(angka){ //fungsi untuk memilih luas yang akan dihitung
		case '1':
			cout<<"Masukkan sisi persegi: "; //input data sisi persegi
			cin>>operasi1;
			
			hasil=pow(operasi1, 2); //operasi perhitungan luas persegi
			cout<<"Jadi luas persegi tersebut adalah "<<hasil<<endl; //output nilai luas persegi
			break;

		case '2':
			cout<<"Masukkan panjang: ";
			cin>>operasi1; //input data panjang 
			
			cout<<"Masukkan lebar: ";
			cin>>operasi2; //input data lebar
			
			hasil=operasi1*operasi2;
			cout<<"Jadi luas persegi panjang/ jajargenjang tersebut adalah "<<hasil<<endl; //output nilai luas persegi panjang/ jajar genjang
			break;
			
		case '3':
			cout<<"Masukkan alas: ";
			cin>>operasi1; //input data alas segitiga
			
			cout<<"Masukkan tinggi: ";
			cin>>operasi2; //input data tinggi segitiga
			
			hasil=0.5*operasi1*operasi2;
			cout<<"Jadi luas segitiga tersebut adalah "<<hasil<<endl; //output nilai luas segitiga
			break;
		
		case '4':
			cout<<"Masukkan jari-jari: ";
			cin>>operasi1; //input data jari-jari lingkaran
			
			hasil= M_PI*pow(operasi1, 2);
			cout<<"Jadi luas lingkaran tersebut adalah "<<hasil<<endl; //output nilai luas lingkaran
			break;
		
		case '5':
			cout<<"Masukkan sisi atas trapesium: "; //input data sisi atas trapesium
			cin>>operasi1;
			
			cout<<"Masukkan sisi bawah trapesium: "; //input data sisi bawah trapesium
			cin>>operasi2;
			
			cout<<"Masukkan tinggi trapesium: "; //input data tinggi trapesium
			cin>>operasi3;
			
			hasil=0.5*(operasi1+operasi2)*operasi3;
			cout<<"Jadi luas trapesium tersebut adalah "<<hasil<<endl; //output nilai luas trapesium
			break;
			
		case '6':
			cout<<"Masukkan panjang diagonal 1: "; //input data diagonal vertikal
			cin>>operasi1;
			
			cout<<"Masukkan panjang diagonal 2: "; //input data diagonal horizontal
			cin>>operasi2;
			
			hasil=0.5*operasi1*operasi2;
			cout<<"Jadi luas layang-layang/ belah ketupat tersebut adalah "<<hasil<<endl; //output nilai luas belah ketupat/ layang-layag
			break;
			
		case '7':
			cout<<"Masukkan sumbu minor: ";
			cin>>operasi1; //input data sumbu minor elips
			
			cout<<"Masukkan sumbu mayor: ";
			cin>>operasi2; //input data sumbu mayor elips
			
			hasil= M_PI*operasi1*operasi2; //operasi perhitungan luas elips
			cout<<"Jadi luas elips tersebut adalah "<<hasil<<endl; //output luas elips
			break;
			
		case '8':
			cout<<"Masukkan sisi segi lima: "; //input data sisi segi lima
			cin>>operasi1;
			
			hasil= 1.25*pow(operasi1, 2)*(1/tan(M_PI/5)); //operasi perhitungan luas segi lima
			cout<<"Jadi luas segi lima tersebut adalah "<<hasil<<endl; //output luas segi lima
			break;
			
		case '9':
			cout<<"Masukkan sisi segi enam: "; //input data sisi segi enam
			cin>>operasi1;
			
			hasil=1.5*sqrt(3)*pow(operasi1, 2); //operasi perhitungan luas segi enam
			cout<<"Jadi luas segi enam tersebut adalah "<<hasil<<endl; //output luas segi enam
			break;
		
		default :
			cout<<"Angka yang anda masukkan tidak tersedia dalam pilihan."<<endl; //Jika salah memasukkan angka
	}
	
	return 0;
}
