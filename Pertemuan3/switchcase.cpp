#include <iostream>
using namespace std;
int main()
{
float pendapatan, jasa, komisi, total;

cout<<"Pendapatan Hari ini Rp. ";
cin>>pendapatan;

if (pendapatan >= 0 && pendapatan <= 20000) {
jasa=10000;
komisi=0.1*pendapatan;
}

else if (pendapatan <=50000){
jasa=20000;
komisi=0.15*pendapatan;
}

else {
jasa=30000;
komisi=0.2*pendapatan;
}
total = komisi+jasa;

cout<<"Uang jasa Rp. "<<jasa<<endl;
cout<<"Uang komisi Rp. "<<komisi<<endl;
cout<<"====================================="<<endl;
cout<<"Hasil total Rp. "<<total<<endl;

return 0;
}




//#include <iostream>
//using namespace std;
//int main()
//{
//float pendapatan, jasa, komisi, total;
////clrscr();
//
//
//cout<<"Pendapatan Hari ini Rp. ";
//cin>>pendapatan;
//
//if (pendapatan >= 0 && pendapatan <= 20000){
//	jasa=10000;
//	komisi=0.1*pendapatan;
//}
//
//else if(pendapatan<=50000){
//	jasa=20000;
//	komisi=0.15*pendapatan;
//}
//else{
//	jasa=30000;
//	komisi=0.2*pendapatan;
//}
//
//total = komisi+jasa;
//
//cout<<"Uang jasa Rp. "<<jasa<<endl;
//cout<<"Uang komisi Rp. "<<komisi<<endl;
//cout<<"====================================="<<endl;
//cout<<"Hasil total Rp. "<<total<<endl;
//getchar();
//}





//Tugas if else, nested if, if else majemuk, switchcase



//#include <iostream>
//using namespace std;
//int main()
//{
//double total_beli, potongan, jum_bayar;
//
////clrscr();
//
//cout<<"Total Pembelian Rp. ";
//cin>>total_beli;
//
//if (total_beli >= 50000);
//potongan=0.2*total_beli;
//cout<<"Bersama Potongan Rp. "<<potongan<<endl;
//
//jum_bayar = total_beli-potongan;
//cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar<<endl;
//getchar ();
//}

