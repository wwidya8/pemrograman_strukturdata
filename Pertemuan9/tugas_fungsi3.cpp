#include <iostream>
using namespace std;

 void menu();
 void persegi();
 void lingkaran();
 void ling2();
 void tabung();
 void tab2();
 void garis();
 
int main(){
  
 char jawab;
 
 do {
  menu(); 
   cout << "\n Apakah ingin mengulang? (y/t) : " ;
   cin >> jawab;
 } while(jawab=='y' || jawab == 'Y' );
	cout<<"\n\n TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI"<<endl;
}
 void menu(){
  int pilihan;
  cout<<endl<<endl;
  garis();
  cout << " Menu menghitung Luas dan Volume " << endl;
  cout << " (1) Persegi" << endl;
  cout << " (2) Lingkaran \t (phi = 3.14)" << endl;
  cout << " (3) Lingkaran \t (phi = 22/7)" << endl;
  cout << " (4) Tabung \t (phi = 3.14)" << endl;
  cout << " (5) Tabung \t (phi = 22/7)" << endl;
  garis();
  cout<<endl<<endl;
  cout << " Masukkan pilihan (1, 2, 3, 4, 5) : ";
  cin >> pilihan;
  cout<<endl;
  switch (pilihan){
   case 1:
    persegi();
    break;
   case 2:
    lingkaran();
    break;
   case 3:
    ling2();
    break;
   case 4:
    tabung();
    break;
   case 5:
   	tab2();
   	break;
   default:
    cout << "\n system error" << endl;
  }
 }
 
 void persegi(){
  int s;
  double L;
  cout << "-----Menghitung Luas Persegi-----" << endl<<endl;
  cout<<" ! Rumus Luas Persegi adalah : sisi x sisi"<<endl<<endl;
  cout << " Masukkan panjang sisi \t = ";
  cin >> s;
  L = s * s;
  cout <<" "<< s<<" x "<<s<<" \t = "<<L<<" cm2"<<endl;
 }
 
 void lingkaran(){
  int r;
  float L;
  double phi = 3.14;
  cout << "-----Menghitung Luas Lingkaran-----" << endl<<endl;
  cout<<" ! Rumus Luas Lingkaran Adalah : (phi= 3.14 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
  cout << " Masukkan panjang jari-jari = ";
  cin >> r;
  L = phi * r * r;
  cout<<" "<<phi<<" x "<<r<<" x "<<r<< " = "<<L<<" cm2"<<endl;
 }
 
  void ling2(){
  int r;
  float L;
  cout << "-----Menghitung Luas Lingkaran-----" << endl<<endl;
  cout<<" ! Rumus Luas Lingkaran Adalah : (phi= 22/7 ) x Jari-Jari x Jari-Jari "<<endl<<endl;
  cout << "Masukkan panjang jari-jari = ";
  cin >> r;
  L = 22 * r * r / 7;
  cout<<" 22/7"<<" x "<<r<<" x "<<r<< " = "<<L<<" cm2"<<endl;
  }
  
  void tabung(){
  int a, t;
  float L;
  double phi = 3.14;
  cout << "-----Menghitung Volume Tabung-----" << endl<<endl;
  cout<<" ! Rumus Volume Tabung Adalah (phi 3.14) x Jari-Jari x Jari-Jari x Tinggi "<<endl<<endl;
  cout<<" Input Jari-Jari alas \t = ";
  cin>>a;               
  cout<<" Input Tinggi Tabung \t = ";
  cin>>t; 
  L = phi * a * a * t;
  cout<< " "<<phi <<" x "<< a <<" x "<< a <<" x "<< t << " \t = "<< L <<" cm3"<<endl;
}

  void tab2(){
  int a, t;
  float L;
  cout << "-----Menghitung Volume Tabung-----" << endl<<endl;
  cout<<" ! Rumus Volume Tabung Adalah (phi 22/7) x Jari-Jari x Jari-Jari x Tinggi "<<endl<<endl;
  cout<<" Input Jari-Jari alas \t = ";
  cin>>a;               
  cout<<" Input Tinggi Tabung \t = ";
  cin>>t; 
  L = 22 * a * a * t /7;
  cout<< " 22/7 "<<" x "<< a <<" x "<< a <<" x "<< t << " \t = "<< L <<" cm3"<<endl;
}
 
 
 void garis(){
  cout <<"====================================="<<endl;
 }
