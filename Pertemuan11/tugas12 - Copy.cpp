#include <iostream>
using namespace std;

struct mhs { 	// nama structure
	// 	anggota structure
	char nama [20], nim [10], matkul [15];
	int sks;
};

struct mhs bayar[2];

int main (){

	// 	variabel utk menghitung
	int bts, var, tetap;
	
	for(int i=0;i<2;i++)
	{
		//input data
		cout<<"\n Nama Mahasiswa : "; cin>>bayar[i].nama;
		cout<<" NIM \t\t: "; cin>>bayar[i].nim;
		cout<<" MatKul [TI, SI, PW] : "; cin>>bayar[i].matkul;
		
		input:
			
		if(bayar[i].sks<0||bayar[i].sks>4)
			{
			cout<<" Program tidak sesuai\n";
			goto input;
			}
		
		// 	masukkan nilai yg akan dihitung
		cout<<" Jumlah SKS [3, 4]   : "; cin>>bayar[i].sks;
		
		// 	pemilihan perhitungan jika 3 sks
		if(bayar[i].sks==3)
			{
			tetap=250000;
			var=bayar[i].sks*250000;
			}
		// 	pemilihan perhitungan jika 4 sks
		else if(bayar[i].sks==4)
			{
			tetap=300000;
			var=bayar[i].sks*300000;
			}
		cout<<"";
		//output data
		cout<<"\n\n --------------------------\n";
		cout<<"      Output      ";
		cout<<"\n --------------------------\n";
		cout<<"\n Nama Mahasiswa : "<<bayar[i].nama;
		cout<<"\n NIM \t\t: "<<bayar[i].nim;
		cout<<"\n Mata Kuliah \t: "<<bayar[i].matkul;
		cout<<"\n Jumlah sks \t: "<<bayar[i].sks;
		cout<<"\n Spp tetap \t: "<<tetap;
		cout<<"\n Spp variabel \t: "<<var;
		cout<<endl<<endl;
	}
	getchar();
}


//#include <iostream>
//using namespace std;
//
//struct name {
//	char name [20];
//	
//};
//
//struct roll {
//	char name [20];
//	struct name info;
//	
//}data;
//
//int main (){
//	cout << " Masukkan Nama Mahasiswa : ";
//	cin >> data.info.name;
//	cout << " Masukkan Status Mahasiswa : ";
//	cin >> data.name;
//	
//	cout << "\n\n -----Data Store Complete-----\n\n";
//	cout << " Name : " << data.info.name << "\n Roll : " << data.name;
//}


