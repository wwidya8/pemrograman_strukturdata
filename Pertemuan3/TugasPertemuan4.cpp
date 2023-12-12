#include <iostream>
using namespace std;
int main()
{
	cout<<"Program Perhitungan Nilai Rata-Rata"<<endl;
	cout<<"====================================="<<endl;
	
	double a, b, c, rt;
	string nama;
	
	cout<<"\n\nNama Siswa : ";
	cin>>nama;
	
	cout<<"Masukan Nilai Pertandingan I\t: ";
	cin>>a;
	cout<<"Masukan Nilai Pertandingn II\t: ";
	cin>>b;
	cout<<"Masukan Nilai Pertandingan III\t: ";
	cin>>c;
	
	rt = (a+b+c)/3;
	
	cout<<"\nSiswa yang bernama "<< nama<<"\n";
	cout<<"Memperoleh nilai rata-rata : "<<rt ;

	if (rt>=85){
		cout<<" Mendapatkan hadiah komputer 15 core"<<endl;
	}
	
	else if (rt>=70){
		cout<<" Mendapatkan uang sebesar Rp. 2.500.000"<<endl;
	}
	else{
		cout<<" Mendapatkan hadiah hiburan"<<endl;
	}
	
	getchar ();
}
