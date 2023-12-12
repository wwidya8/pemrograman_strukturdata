#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int barisA, kolomA, barisB, kolomB, i, j, k, a[10][15], b[10][15], c[10][15];
	
	cout<<"\nMasukkan Matriks A dan Matriks B \n";
	cout<<endl;
	
	cout<<"Masukkan jumlah Baris Maktriks A : ";
	cin>>barisA;
	cout<<"Mauskkan jumlah Kolom Matriks A : ";
	cin>>kolomA;
	cout<<endl;
	
	for (i=1; i<=barisA; i++){
		for (j=1; j<=kolomA; j++){
			cout<<"A ["<<i<<"] ["<<j<<"] = ";cin>>a[i][j];
		}
	}
	cout<<endl;
	for (i=1; i<=barisA; i++){
		for (j=1; j<=kolomA; j++){
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nMasukkan jumlah Baris Maktriks B : ";
	cin>>barisB;
	cout<<"Mauskkan jumlah Kolom Matriks B : ";
	cin>>kolomB;
	cout<<endl;
	
	for (i=1; i<=barisB; i++){
		for (j=1; j<=kolomB; j++){
			cout<<"B ["<<i<<"] ["<<j<<"] = ";cin>>b[i][j];
		}
	}
	cout<<endl;
	for (i=1; i<=barisB; i++){
		for (j=1; j<=kolomB; j++){
			cout<<setw(4)<<b[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Maka hasil Penjumlahan Matriks adalah : "<<endl;
	if (barisA==barisB && kolomA==kolomB){
		for (i=1; i<=barisA; i++){
			for (j=1; j<=kolomA; j++){
				c[i][j]=a[i][j]-b[i][j];
				cout<<setw(4)<<c[i][j];
			}
			cout<<endl;
		}
	}
}

//#include <iostream>
//#include <conio.h>
//using namespace std;
//   int main() {
//      
//       int angka, jumlah, max, min;
//     
//       cout << "Mencari nilai terbesar dan terkecil. (jumlah angka ditentukan)" << endl;
//       cout << endl;
//       cout << "masukkan jumlah angka: "; cin >> jumlah;
//       cout << endl;
//    
//       for (int i = 1; i <= jumlah; i++) {
//     
//       cout << "Masukkan Angka       : "; cin >> angka;
//   
//       if ( i == 1 ) {
//             min = angka;
//             max = angka;
//            }
//            else if ( min > angka ) {
//               min = angka;
//            }
//            else if ( max < angka) {
//               max = angka;
//           }
//           else {}
//           }
//    
//       cout << endl;
//       cout << "Nilai terkecil           : " <<  min << endl;
//       cout << "Nilai terbesar           : " <<  max << endl;
//    
//       getch();
//       }
