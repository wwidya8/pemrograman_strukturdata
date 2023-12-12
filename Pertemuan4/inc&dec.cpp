//Increment dan Decrement
//Increment adalah ++ 
//Decrement adlah --

#include <iostream>
using namespace std;
int main ()//{
//	
//	int x,y;
//		//post = memberikan operator setelah variabel
//	x=1 ;
//	cout<< x <<endl;
//	x++;    //lebih sederhana
////	x = x + 1;
//	cout<< x <<endl;
//	x++;
//	cout<< x <<endl;
//	x--;
//	cout<< x <<endl;
//	
//	cout<<"==================";
////	//pre = memberikan operator sebelum variabel
//	y=1;
//	cout<< y <<endl;
//	++y;
//	cout<< y <<endl;
//		++y;
//	cout<< y <<endl;
//}



//{
//	int awal, akhir;
//	cout<<"Mulai berapa : ";
//	cin>>awal;
//	cout<<"Sampai berapa : ";
//	cin>>akhir;
//	for (int a = awal; a <= akhir; a++){  //Deklarasi 3 variabel masing-masing memiliki increment
//	cout<<a<<". Kamu siapa?" <<endl;
//	}
//
//}

//{
//	int a, b, bintang;
//	
//	cout<<"Masukan jumlah bintang : ";
//	cin>>bintang;
//	
//	for (a=1; a<=bintang; a++){
//		
//		for (b=1; b<=a; b++){
//			
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//getchar();
//}


//{
//    int jumlah;
//    cout<<"Masukan jumlah angka : ";
//    cin>>jumlah;
//    
//    for(int a=jumlah; a>=1; a--){
//    	
//        for(int b=a; b>=1; b--){
//        	
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//	
//    for(int a=1; a<=jumlah; a++){
//    	
//        for(int b=1; b<=a; b++){
//        	
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//    
//}

//POLA BELAH KETUPAT
{
	int a, i, j, k;
	cout<<"Input lebar belah ketupat :";
	cin>>a;
	cout<<endl;
	
	for (i=1; i<=a; i++){
		for (j=1; j<=a-i; j++){
			cout<<"a" ;	
	
		}
		for (k=1; k<=i; k++){
			cout<<" *" ;
		}
		cout<<endl;	
	}
	for (i=1; i<=a; i++){
		for (j=1; j<=i; j++){
				cout<<"b" ;	
		}

		for (k=1; k<=a-i; k++){
			cout<<" *" ;
		}
		cout<<endl;
	}
	return 0;
}
//	
	
//{
//	int bil;
//	//clrscr();
//	for (bil = 60; bil>=10; bil++){
//		cout<<bil<<" ";
//	}
//	getchar();
//}

//Tugas pertemuan terakhir
//1. 1111
//	 2222
//	 3333

//2.comtoh pemrograman perulang
//2.perulangan menurun

//2.perulangan ganjil genap

//3.
