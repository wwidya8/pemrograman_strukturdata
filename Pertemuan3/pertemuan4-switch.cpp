#include <iostream>
using namespace std;
int main ()
{
	int a, b, c, rt;
	string nama;
	
	cout<<"Program Penghitung Nilai Rata-Rata"<<endl;
	cout<<"==========================================="<<endl;
	
	cout<<"\n\nNama Siswa : ";
	cin>>nama;
	
	cout<<"Masukan Nilai Pertandingan I\t : ";
	cin>>a;
	cout<<"Masukan Nilai Pertandingan II\t : ";
	cin>>b;
	cout<<"Masukan Nilai Pertandingan III\t : ";
	cin>>c;
	
	rt = (a+b+c)/3;
	
	cout<<"\nSiswa yang bernama "<< nama<<"\n";
	cout<<"Memperoleh nilai rata-rata : "<<rt ;
	
	switch (rt){
		case 85 ... 100 :
			cout<<" Mendapatkan hadiah komputer 15 core"<<endl;
			break;
			
		case 70 ... 84 :
			cout<<" Mendapatkan uang sebesar Rp. 2.500.000"<<endl;
			break;
			
		default :
			cout<<" Mendapatkan hadiah hiburan"<<endl;
			
	}
	
	getchar ();
}
