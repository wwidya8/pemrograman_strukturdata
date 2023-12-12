#include <iostream>
#include <string.h>
using namespace std;
int main(){
char huruf[20];
 char pindah[20];
//clrscr();
 cout<<"Masukkan Sembarang Kata = ";
 cin >> huruf;
/* Proses */
 strcpy(pindah, huruf);
 cout<<"Pemindahannya = "<<pindah;
 getchar ();
}




//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	//OFSTREAM = Membuat File
//	
// ofstream myfile;
// myfile.open("TEST.txt", ios::app);
// cout<<"OPERASI FILE OFSTREAM"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// myfile<<"Belajar OPERASI FILE OFSTREAM"<<endl;
// myfile.close();
// cout<<"Text telah ditulis ke dalam File"<<endl;
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// return 0;
//}

//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	//INSTREAM = Membuka isi file
//	
// ifstream myfile;
// char sv_text;
// myfile.open("TEST.txt");
// cout<<"OPERASI FILE 2"<<endl;
// cout<<"--------------"<<endl;
// if(!myfile.fail())
// {
// cout<<"Isi dari File TEST.txt adalah ";
// while (!myfile.eof())
// {
// myfile.get(sv_text);
// cout<<sv_text;
// }
// myfile.close();
// }else{
// cout<<"File tidak ditemukan"<<endl;
// }
// getchar();
// return 0;
//}
