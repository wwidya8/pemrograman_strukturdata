#include <iostream>
using namespace std;
 
int main()
{
 cout << "##  Program Looping Deret Angka Ganjil & Genap  ##" << endl;
 cout << "=============================================" << endl;
 cout << endl;
 
 int i, ganjil, genap;
 
 cout << "Input jumlah deret ganjil : ";
 cin >> ganjil;
 
 for (i=1; i<=ganjil; i++) {
   cout << (i * 2) -1 << " "<<endl;
 }
 cout << endl;
 cout << "Input jumlah deret genap : ";
 cin >> genap;
 
 for (i=1; i<=genap; i++) {
   cout << i * 2 << " "<<endl;
 }
 cout << endl;
 return 0;
}

//#include <iostream>
// 
//using namespace std;
// 
//int main()
//{
// cout << "##  Program C++ Deret Angka Genap  ##" << endl;
// cout << "=====================================" << endl;
// cout << endl;
// 
// int jumlah_deret,i;
// 
// cout << "Jumlah deret yang diinginkan: ";
// cin >> jumlah_deret;
// 
// for (i=1;i<=jumlah_deret;i++) {
//   cout << i * 2 << " "<<endl;
// }
// 
// cout << endl;
// return 0;
//}

