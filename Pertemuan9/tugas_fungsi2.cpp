#include <iostream>
using namespace std;

// void menu();
//
//double hitungP (double s){
//	double L = s * s;
//	return L;
//}
//
//double hitungL1 (double r){
//	const double phi = 3.14;
//	double L1 = phi * (r * r);
//	return L1;
//}
//
//double hitungL2 (double rr){
//	double L2 =  22*rr*rr/7;
//	return L2;
//}
//
//void persegi (double s){
////	double L = hitungP(s);
//	
// 	cout<< "\n ---Menghitung Luas Persegi--- ";
// 	cout<< "\n\n (!) Rumus Menghitung Luas Segitiga Adalah Sisi x Sisi ";
// 	cout<< "\n\n Masukkan Panjang Sisi : ";
// 	cin>> s;
// 	cout<< " Luas = "<<s<<" x "<<s<<" = "<<hitungP(s);
//}
//
//void tampiL1 (double r){
////	double L1 = hitungL1(r);
// 	cout<< "\n ---Menghitung Luas Lingkaran phi 3.14--- ";
//	cout<<"\n\nMasukan Nilai Jari-Jari : ";
//	cin>>r;
//	 
//	cout<<"\nL = r x r x phi"<<endl;
//	cout<<"3.14 x "<<r<<" x "<<r<<" = "<<hitungL1(r)<<" cm2"<<endl;
//}
//
//void tampiL2 (double rr){
////	double L2 = hitungL2(rr);
// 	cout<< "\n ---Menghitung Luas Lingkaran phi 22/7--- ";
//	cout<<"\n\nMasukan Nilai Jari-Jari : ";
//	cin>>rr;
//	 
//	cout<<"\nL = phi x r x r "<<endl;
//	cout<<"22/7 x "<<rr<<" x "<<rr<<" = "<<hitungL2(rr)<<" cm2"<<endl;
//}
//
// void menu(){
// 	char w;
//	int s, r, rr;
//	cout<<"\n Pilih Perhitungnan Yang Ingin Di Lakukan \n[P (Luas Persegi) | L (Luas Lingkaran 3.14) | V (Luas Lingkaran 22/7)] : ";
//	cin>>w;
//  
//	if (w == 'p' || w == 'P'){
//	persegi(s);
//	cout<<endl;
//  }
//	if (w == 'l' || w == 'L'){
//	tampiL1(r);
//	cout<<endl;
//  }
//	if (w == 'v' || w == 'V'){
//	tampiL2(rr);
//	cout<<endl<<endl;
//  }
//  
// }
// 
//  int main (){
// 	char jawab ;
// 	
// 	do {
// 		menu ();
// 		cout<<" Apakah anda ingin mengulang menghitung ? ";
// 		cin>>jawab;
//	 }
//	 while (jawab == 'Y' || jawab == 'y');
//
// }

double hitungP (double s){
	double L = s * s;
	return L;
}

double hitungL1 (double r){
	double phi = 3.14;
	double L1 = phi * (r * r);
	return L1;
}

double lingkaran2 (double rr){
	double L2 =  22*rr*rr/7;
	return L2;
}


void tampilP (double s){
	double L = hitungP(s);
}

void tampiL1 (double r){
	double L1 = hitungL1(r);
}

void tampiL2 (double rr){
	double L2 = lingkaran2(rr);
}


int main (){
	int pilih;

	cout<<endl;
	cout<<" 1. Luas Persegi "<<endl;
	cout<<" 2. Luas Lingkaran phi=3.14 "<<endl;
	cout<<" 3. Luas Lingkaran phi=22/7 "<<endl;
	cout<<" 4. Volume Tabung phi=3.14 "<<endl;
	cout<<" 5. Volume Tabung phi=22/7 "<<endl;
	cout<<endl;
	cout<<"================================================="<<endl;
	cout<<endl<<endl;
	cout<<" >> Silahkan Pilih : ";
	cin>>pilih;
	cout<<endl;
	switch (pilih){ 
	
	case 1 :
	double s;
	cout<<"\n!Rumus Luas Persegi adalah sisi x sisi"<<endl<<endl;
	cout<<"\nInput Panjang Sisi Persegi : " ;
	cin>>s ;
	cout<<s<<" x "<<s<<" = "<<hitungP(s)<<" cm2"<<endl;
	break; 
	
	case 2 : 
	double r;
	cout<<"!Rumus Luas Lingkaran Adalah (phi= 3.14 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
	cout<<"Input Panjang Jari-Jari : ";
	cin>>r; 
	cout<<"3.14 x "<<r<<" x "<<r<< " = "<<hitungL1(r)<<" cm2"<<endl;
	break;
	
	case 3 : 
	float rr;
	cout<<"!Rumus Luas Lingkaran Adalah (phi= 22/7 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
	cout<<"Input Panjang Jari-Jari : ";
	cin>>rr; 
	cout<<"22/7 x "<<rr<<" x "<<rr<< " = "<<lingkaran2(rr)<<" cm2"<<endl;
	break;
	}
	
	return 0;
}

