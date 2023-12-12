#include <iostream>
#include <fstream>
//#include <string.h>
//#include <ctype.h>
//#include <cstring>
//#include <math.h>
//#inlcude <stdlib.h>
using namespace std;
int main(){
	//Operasi String : deretan simbol yg tdk menentu panjangnya
	
	//fungsi STARCAT : menambahkan sumber ke bagian akhir dari string tujuan 
	
	//stirng strcy : string.h
	
//	char a1[20]; //batasan harus sama
//	char a2[20]; //batasan harus sama
//	//clrscr;
//	cout<<"Masukan kata -1 = ";
//	cin>>a1;
//	cout<<"Masukan kata -2 = ";
//	cin>>a2;
//	
//	strcat(a1,a2);
//	cout<<"Hasil penggabungan = "<<a1;
//	getchar();

//	char a1[]= "Ibik";
//	char a2[]= "IBIK";
//	char a3[]= "kesatuan";
	//clrscr;
	
//	cout<<"Hasil perbandingan "<<a1<< " dan "<<a2<<"->";
//	cout<<strcmp(a1,a2)<<endl;
//	cout<<"Hasil perbandingan "<<a2<< " dan "<<a2<<"->";
//	cout<<strcmp(a2,a1)<<endl;
//	cout<<"Hasil perbandingan "<<a1<< " dan "<<a1<<"->";
//	cout<<strcmp(a1,a1)<<endl;
	
	//STRCPY
//	char huruf [20];
//	char pindah [20];
//	//clrscr();
//	
//	cout<<"Masukan sembarang kata = ";
//	cin>>huruf;
//	/*proses*/
//	
//	strcpy(pindah,huruf);
//	cout<<"Perpindahannya = "<<pindah;
//	getchar();

	//STARLEN
//	char huruf [20];
//	char pindah [20];
//	//clrscr();
//	
//	cout<<"Masukan sembarang kata = ";
//	cin>>huruf;
//	
//	cout<<"Panjang kata yang diinputkan = ";
//	cout<<strlen(huruf);
//	
//	getchar();

//	char kalimat[100];
//	cout<<"Masukan Kalimat : ";
//	cin.getline(kalimat,sizeof(kalimat));
//	
//	int x=strlen(kalimat);
//	cout<<"Klaimat Terbalik : ";
//	for (int i=x; i<=0; i--){
//		cout<<kalimat[i];
//	}


//	char kata[20];
//	float angka,a;
//	//clrscr();
//	cout<<"Masuka sembarang kata : ";
//	cin>>kata;
//	angka=atof(kata);
//	a=angka+5;
//	cout<<"Hasil perubahan ditambah dengan 5"<<a;
//	getchar();


	//ATOI : ubah string jadi integer "1" jadi 1
//	char kata[20];
//	float angka,a,b;
//	//clrscr();
//	
//	cout<<"Masukan sembarang kata berupa angka = ";
//	cin>>kata;
//	angka=atoi(kata);
//	a=angka+7;
//	cout<<"Hasil perubahan ditambah 7 = "<<a;
//	getchar();

	//ATOL : ubah string jadi long integer "10" jadi 10
//	char kata [20];
//	float angka, a;
//	//clrscr();
//	cout<<"Masukan sembarang angka = ";
//	cin>>kata;
//	angka = atol(kata);
//	a = angka+8;
//	cout<<"Hasil perubahan ditambah 8 = "<<a;
//	getchar();
	
	//TOUPPER & TOLOWER = untuka mengubah huruf capslok dan sebaliknya
// 	char teks[20], teks_baru[20];
// 	cout << "Tuliskan kata dengan huruf kapital = ";
//	cin >> teks;
// 	for (int i=0; i<strlen(teks); i++) {
// 	if(teks[i] >= 'a' && teks[i] <= 'z'){
// 	teks_baru[i] = toupper(teks[i]);
//	 }
// 	else{
// 	teks_baru[i] = tolower(teks[i]);
// 	}
// 	}
// 	cout << "Hasil Perubahan = " << teks_baru << endl;
//	 return 0;
	
	
	//OFSTREAM = membuat file
	
	 ofstream myfile;
 	myfile.open("TEST.txt", ios::app);
 	cout<<"OPERASI FILE OFSTREAM"<<endl;
 	cout<<"--------------"<<endl;
 	if(!myfile.fail())
 	{
 	myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
	 myfile.close();
 	cout<<"Text telah ditulis ke dalam File"<<endl;
	 }else{
	 cout<<"File tidak ditemukan"<<endl;
 	}
 	getchar();
	
	return 0;
}
