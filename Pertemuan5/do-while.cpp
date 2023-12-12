#include <iostream>
using namespace std;

int main ()
//{
//	int awal, akhir;
//	cout<<"Nilai Awal : ";
//	cin>>awal;
//	cout<<"Nilai Akhir :";
//	cin>>akhir;
//	
//	int z= awal;
//	while (z >= akhir){
//		cout<<"Saya senang"<<endl;
//		z--;
//	}
//	cout<<endl;
//}

// go to dan while bisa Y & y

//char ulang;
//awal :
//cout<< "Program perulangan menggunakan go to"<<endl;
//cout<<endl;
//cout<<"Ingin mengulang perintah (y/n) ?"<<endl;
//cin>>ulang;
//cout<<endl;
//if (ulang=='y' || ulang 'Y'){
//	goto awal;
//}
//if (ulang=='n' || ulang=='N'){
//	goto akhir;
//}

//{
//	// >> PERTEMUAN 5
//	// >> PROGRAM FOR, DERET JAM, MENIT, DAN DETIK <<
//	
//	int a,b,c,d;
//	
//	//DERET KESAMPING 1-10
//	for (a=1; a<=10; a++){
//
//	//JAM = a, MENIT = a*60, dan DETIK = a*3600
//		cout<<a<<" Jam "<< a*60 << " Menit "<< a*3600 <<" Detik "<<endl;
//	}
//	cout<<endl;
//}

{
	int a=0, b, c =1, next;
	
	cout<< "Masukkan Bilangan Yang Akan Ditampilkan : ";
	cin>> b;
	
	cout<<"Deret Bilangan : "<< a << c ;
	
	next = a + c;
	
	while (c <= b){
		cout << next ;
		a = c;
		c = next;
		
		next = a + c;
	}
	
}
