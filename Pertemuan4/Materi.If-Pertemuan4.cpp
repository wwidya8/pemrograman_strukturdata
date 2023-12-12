//#include<iostream>
//#include<conio.h>
//using namespace std;
//int main () {
//#include <iostream>
//using namespace std;
//int main()
//{
//    int uangSaya = 10000;
//    int pilihannya;
//    cout << " " << endl;
//    cout << "1. " << endl;
//    cout << "2." << endl;
//    cout << ": ";
//
//    if(uangSaya <= 6000) {
//        cout << "Tidak beli apa apa" << endl;
//    }
//    else if(uangSaya >= 7000 && uangSaya <= 14000){
//        cout << "Pecel lele aja " << endl;
//    }
//    else if(uangSaya >= 15000 && uangSaya <= 22000){
//        cout << "Pecel Lele ATAU Stick Kentang ?? " << endl;
//    }
//    else{
//        cout << "Pecel Lele DAN Stick Kentang" << endl;
//    }
//}

#include <iostream>
using namespace std;
int main()
{
double total_beli, potongan=0, jum_bayar=0;
//clrscr();
cout<<"Total Pembelian Rp. ";
cin>>total_beli;

if (total_beli >= 50000);

potongan=0.2*total_beli;

cout<<"Bersama Potongan Rp. "<<potongan<<endl;

jum_bayar = total_beli-potongan;

cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar<<endl;
getchar ();
}




