#include<iostream.>
#include<conio.h>
using namespace std;
main ()
{
cout<<endl;
cout<<" Nama          : Widya Lintang Lestari "<<endl;
cout<<" Kelas         : TI 23 PA2"<<endl;
cout<<" Mata Kuliah   : Lab. Algoritma Pemrograman & Struktur Data"<<endl;
cout<<endl;
cout<<"================================================="<<endl;
cout<<endl;  

int pilih;
cout<<" Volume Tabung & Luas Lingkaran :"<<endl;
cout<<endl;
cout<<" 1. Volume Tabung phi=3.14 "<<endl;
cout<<" 2. Volume Tabung phi=22/7 "<<endl;
cout<<" 3. Luas Lingkaran phi=3.14 "<<endl;
cout<<" 4. Luas Lingkaran phi=22/7 "<<endl;
cout<<endl;
cout<<"================================================="<<endl;
cout<<endl<<endl;
cout<<" >> Silahkan Pilih : ";
cin>>pilih;
cout<<endl;
switch (pilih){ 

case 1 : 
cout<<" !Rumus Volume Tabung Adalah (phi 3.14) x Jari-Jari x Jari-Jari x Tinggi "<<endl<<endl;
double a,t,rumus; 
cout<<" Input Jari-Jari alas \t = ";
cin>>a;               
cout<<" Input Tinggi Tabung \t = ";
cin>>t;               
rumus = 3.14*a*a*t;
cout<<endl;           
cout<<" Maka Hasilnya \t = "<<rumus<<" Cm3 "<<endl;
break;   

case 2 : 
cout<<" !Rumus Volume Tabung Adalah (phi=22/7) x Jari-Jari x Jari-Jari x Tinggi "<<endl<<endl;
double A,T,Rumus; 
cout<<" Input Jari-Jari alas \t = ";
cin>>A;               
cout<<" Input Tinggi Tabung \t = ";
cin>>T;               
Rumus = 22*A*A*T/7;
cout<<endl;           
cout<<" Maka Hasilnya \t = "<<Rumus<<" Cm3 "<<endl;
break;                  

case 3 : 
cout<<" !Rumus Luas Lingkaran Adalah (phi= 3.14 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
float rr;  
cout<<" Input Jari-Jari \t = ";
cin>>rr;               
cout<<endl;    
cout<<" Maka Hasilnya \t\t = "<<3.14*rr*rr<<" Cm2 "<<endl;
break;   

case 4 : 
cout<<" !Rumus Luas Lingkaran Adalah (phi= 22/7 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
float r;  
cout<<" Input Jari-Jarinya \t = ";
cin>>r;         
cout<<endl;
cout<<" Maka Hasilnya \t\t = "<<22*r*r/7<<" Cm2 "<<endl;
break;                  
}
return 0;
}


