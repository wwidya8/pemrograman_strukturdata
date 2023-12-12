//#include <iostream>
//using namespace std;
//
//////	IMPLEMENTASI STRUCT SEDERHANA
//
//int main (){
//	struct {
//	char nim [9];
//	char nama [15];
//	float nilai;
//}
//	mahasiswa;
//	//clrscr();
//	cout << " Masukkan NIM : ";
//	cin >> mahasiswa.nim;
//	cout << " Masukkan Nama : ";
//	cin >> mahasiswa.nama;
//	cout << " Masukkan Nilai Akhir : ";
//	cin >> mahasiswa.nilai;
//	
//	cout << "\n\n Data yang diinputkan adalah : \n\n";
//	cout << " NIM\t\t= " << mahasiswa.nim << endl;
//	cout << " Nama\t\t= " << mahasiswa.nama << endl;
//	cout << " Nilai Akhir\t= " << mahasiswa.nilai << endl;
//	getchar();
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//////	 IMPLEMENTASI CARA MENGAKSES MEMBER DALAM STRUCT
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;	
//};
//
//int main (){
//	siswa arkan, lukas;
//	
//	arkan.no_induk = 1;
//	arkan.nama = "Arkan Januar ";
//	arkan.nilai = 75.5;
//
//	lukas.no_induk = 2;
//	lukas.nama = "Lukas Laksono ";
//	lukas.nilai = 89.9;
//	
//	cout << arkan.nama << " dengan nomor induk " << arkan.no_induk << " mendapatkan nilai " << arkan.nilai <<endl;
//	cout << lukas.nama << " dengan nomor induk " << lukas.no_induk << " mendapatkan nilai " << lukas.nilai <<endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//////	 IMPLEMENTASI CARA MENGINISIALISASI OBJEK KE DALAM STRUCT
//
//struct siswa {
//	int no_induk;
//	string nama;
//	float nilai;
//};
//int main (){
//	siswa jerry = {1, "Jerry Januar ", 85.5}; 	// Initializer list
//	siswa tono = {2, "Tono Laksono ", 89.9};	//Uniform Initializer
//	
//	cout << jerry.no_induk << " " << jerry.nama << " mendapatkan nilai " << jerry.nilai << endl;
//	cout << tono.no_induk << " " << tono.nama << " mendapatkan nilai " << tono.nilai << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
////// 	IMPLEMENTASI NESTED STRUCT
//
//int main (){
//	struct dtmhs{
//		char nim [9];
//		char nama [15];
//		
//	};
//	struct dtnil{
//		float nil1;
//		float nil2;
//	};
//	struct {
//		struct dtmhs mhs;
//		struct dtnil nil;
//	}nilai;
//	//clrscr();
//	
//	cout << " Masukkan NIM = "; cin >> nilai.mhs.nim;
//	cout << " Masukkan Nama = "; cin >> nilai.mhs.nama;
//	cout << " Masukkan Nilai UTS = "; cin >> nilai.nil.nil1;
//	cout << " Masukkan Nilai UAS = "; cin >> nilai.nil.nil2;
//	cout << endl;
//	
//	cout << " NIM : " << nilai.mhs.nim << endl;
//	cout << " Nama : " << nilai.mhs.nama << endl;
//	cout << " Nilai UTS : " << nilai.nil.nil1 << endl;
//	cout << " Nilai UAS : " << nilai.nil.nil2 << endl;
//	cout << endl;
//	getchar ();
//	return (0);
//}


//#include <iostream>
//using namespace std;
//
////// 	IMPLEMENTASI STRCUT DENGAN ARRAY
//
//typedef struct orang {
//	char nama [30];
//	short umur;
//}org;
//
//int main (){
//	org saya [5];
//	int i, x;
//	for (i=0; i<=2; i++){
//		
//		cout << " Nama : "; cin >> saya[i].nama;
//		cout << " Umur : "; cin >> saya[i].umur;
//		cout << endl;
//	}
//	for (x=0; x<=2; x++){
//		cout << " Data ke  [ " << x << " ] bernama " << saya[x].nama << " dan berumur " << saya[x].umur << " tahun";
//		cout << endl;
//	}
//}


//#include <iostream>
//using namespace std;
//	
//////	 IMPKEMENTASI STRUCT DENGAN FUNCTION 
//
//struct sum {
//	int add (int num1, int num2){
//		return num1 + num2;
//	}
//	int add (int num1, int num2, int num3){
//		return num1 + num2 + num3;
//	}
//};
//
//int main (){
//	sum calculator;
//	cout << " Hasil 1 = " << calculator.add(5, 7) << endl;
//	cout << " HAsil 2 = " << calculator.add(9, 2, 5) << endl;
//}

