#include <iostream>
using namespace std;

//reference * (Menyimpan alamat dari variabel)membaca value pada alamat
//deference & (Mencari alamat dari variabel) membaca alamat

//void nama (string *b){
//	cout<<"\nAlamat nama : "<<&b;
//	cout<<"\nNama : "<<*b;
//}
//
//int main ()
//{
//	string a;
//	cout<<"Masukkan Kata: ";
//	cin>>a;
//	nama (&a);
//}

//int main()
//{
//	int yofrie = 93;
//	int *hardiansyah ;
//	//clrscr();
//	
//	cout<<"Nilai awal yofrie"<<yofrie<<endl;
//	hardiansyah = &yofrie;
//	
//	cout<<"Nilai Hardiansyah sekarang = ";
//	cout<<*hardiansyah<<endl;
//	
//	*hardiansyah=50;
//	cout<<"Nilai Hardiansyah sekarang = ";
//	cout<<*hardiansyah<<endl;
//	getchar();
//	
//}

//int main()
//{
//	int ilham ;
//	int *raka ;
//	int **amir ;
//	//clrscr();
//	ilham =75;
//	cout<<"Nilai Ilham = "<<ilham<<endl;
//	raka = &ilham;
//	amir = &raka;
//	
//	cout<<"Nilai Raka hasil mengakses Ilham = ";
//	cout<<*raka<<endl;
//	cout<<"Nilai Amir hasil mengakses Ilham = ";
//	cout<<**amir<<endl;
//	getchar();
//}

//int main()
//{
//	int ilham, amir, *raka;
//	//clrscr();
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	
//	cout << "Nilai Ilham ="<<ilham<<endl;
//	cout << "Nilai Amir ="<<amir<<endl;
//	cout << "Nilai Raka ="<<raka<<endl;
//	
//	getchar();
//}

//------------------------------
//Implementasi Pointer Reference
//int main()
//{
//	int ilham, *raka, rafli;
//	ilham = 75;
//	raka = &ilham;
//	rafli = *raka;
//
//	cout << "Nilai Ilham ="<<ilham<<endl;
//	cout << "Nilai Raka ="<<raka<<endl;
//	cout << "Nilai Rafli ="<<rafli<<endl;
//	
//	getchar();
//}

//int main()
//{
//	int i;
//	int nilai[5];
//	int *ptrnilai;
//	ptrnilai = nilai;
//	for (i=1; i<=5; i++){
//		cout<<"Masukkan Nilai elemen ke-"<<i<<" = ";
//		cin>>nilai[i];
//	}
//	
//	cout<<endl;
//	cout<<"Hasil Pengaksesan Elemen Array lewat";
//	cout<<"Pointer";
//	cout<<endl<<endl;
//	for (i=1; 1<=5; i++){
//		cout<<"Elemen "<<i<<". Nilai "<<nilai[i];
//		cout<<", Menempati alamat memori = ";
//		cout<<&ptrnilai[i];
//		cout<<endl;
//	}
//	getchar();
//}

//int main()
//{
//	char band_metal[] = " Sepul Tura ";
//	char *band_punk = " Ancid ";
//	
//	cout<<"Nama Band Metal = "<<band_metal<<endl;
//	cout<<"Nama Band Punk = "<<band_punk<<endl;
//	band_punk += 3;
//	
//	cout<<"Nama Band Metal = "<<band_metal<<endl;
//	cout<<"Nama Band Punk = "<<band_punk;
//	
//	getchar ();
//	
//}

// CODE JOSHUA
//#include <iostream>
//using namespace std;


//int cek(int *x);
//
//int main(){
//	int t, p, *d;
//	d=&p;
//	
//	cout<<"Masukan Bilangan = ";
//	cin>>p;
//	
//	t = p;
////	cout<<p<<" ";
//
//	cek(&p);
//	
//	cout << "\n\nResult : " << t << " " <<*d<< " " <<t;
////	cout<<t;
////	cout<<" "<<*d;
//	return 0;
//}
//
//int cek(int *x){
////	int y, s;
////	y = *x % 2;
//if(*x & 2 == 0){
//		return *x+1;
////		cout<<*x + 1;
//	}
//	else{
//
//	}
//}

////	KODE WIDYA
//int ubah(int *x);
//
//int main(){
//	int number, a, *b;
//	
//	cout<<"\n Masukan Bilangan = ";
//	cin>>number;
//	
//	a = number;	
//	b = &number;
//
//	ubah(&number);
//	
//	cout << "\n\n Result : " << a << " " <<*b<< " " <<a;
//
//	return 0;
//}
//
//	
//int ubah(int *x) {
//	//jika bilangan genap, maka akan ditambah 1
//   if (*x % 2 == 0) {
//      *x = *x + 1;
//   }
//   
//   else {
//   	return *x;
//   }
//}
