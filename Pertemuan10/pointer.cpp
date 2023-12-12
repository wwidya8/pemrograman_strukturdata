#include <iostream>
//#include <string>
using namespace std;

//void penjumlahan(int &total)
//{
//	total=total+1;
//}
//
//int main() {
//	
//	int hitung =20;
//	int result =0;
//	penjumlahan(hitung);
//	
//	cout<<"---Pass by Reference---\n";
//	cout<<"\nTotal = ";
//	cout<<hitung;
//	return 0;
//}

//reference * (Menyimpan alamat dari variabel)membaca value pada alamat
//deference & (Mencari alamat dari variabel) membaca alamat

//int main (){
//	int a =10;
//	int b;
//	
//	int *c=&a;
//	int d=a;
//	cout<<"Alamat dari a adalah = "<<&a<<endl;
//	cout<<"Alamat dari b adalah = "<<&b<<endl;
//	cout<<"Alamat dari c adalah = "<<c<<endl;
//	cout<<"Value dari d adalah = "<<d<<endl;
//	
//}

#include <iostream>
using namespace std;

int tambahkanArray (const int* arr, int ukuran){
	int hasil = 0;
	
	for (int i=0; i<ukuran; ++i){
		hasil += *arr;
		arr++;
	}
	
	return hasil;
	
}

int main ()
{
	int ukuranArray,p;
	cout<<"Masukkan Ukuran Array : ";
	cin>>ukuranArray;
	
	int arrayAngka[ukuranArray];
	cout<<"Masukkan Elemen Array : "<<endl;
	
	for (int i=1; i<=ukuranArray; i++){
		
		cout<<"Elemen ke-"<<i<<": "; //i
		
		cin>>arrayAngka[i]; //arrayAngka[]
		p = p+arrayAngka[i];
	}
	
	int total = tambahkanArray(arrayAngka, ukuranArray);

	cout<<"Hasil Penjumlahan Array : "<<p<<endl;
	
	return 0;
}


