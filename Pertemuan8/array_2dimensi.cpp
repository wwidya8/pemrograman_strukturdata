//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int data[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //3 baris, 3 kolom
//    int i,j,x;
//    
//    for (i=0; i<3; i++) //baris
//	{ 
//    	x=0;
////    	x=1;	//untuk dikali
//    	for (j=0; j<3; j++) //kolom
//		{
//    		cout<<data[i][j]<<" "; //1 2 3
//    		x=x+data[i][j]; //0+1=1, 1+2=3, 3+3=6
////    		x=x*data[i][j]; //1*1=1, 1*2=2, 2*3=6	//untuk dikali
//		}
//	cout<<endl;	
//	}
//	cout<<"Nilai x adalah "<< x <<endl;


//	int matriksA[2][3]={{2,3,4},{5,4,3}};
//	int matriksB[2][3]={{1,1,1},{2,2}};
//	int matriksC[2][3]={{4,3},{2}};
//	int i,j;
//	
//	for (i=0; i<2; i++) //2 Baris
//	{
//		for (j=0; j<3; j++){ //3 Kolom
//			cout<<matriksA[i][j]<<" ";	//Jika kolomnya tidak terpenuhi elemennya maka akan diisi 0
//		}
//		cout<<endl;
//	}


#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string jurusan;
};

int main(){
    mahasiswa mhs[5];
    for(int i=0; i<5; i++){
        // [+] Input Data Masahasiswa ke - i [+]
        cout << "[+] Masukkan Data Mahasiswa ke - " << i+1 << " [+]" << endl;
        cout << "Masukkan NIM: ";
        cin >> mhs[i].nim;
        cout << "Masukkan Nama: ";
        cin >> mhs[i].nama;
        cout << "Masukkan Jurusan: ";
        cin >> mhs[i].jurusan;
        cout << "=========================" << endl;
    }
    cout << "NIM\tNama\tJurusan" << endl;
    for(int i=0; i<5; i++){
        cout << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].jurusan << endl;
    }
}
