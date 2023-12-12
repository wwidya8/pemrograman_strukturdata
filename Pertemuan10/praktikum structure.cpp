#include <iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	int umur;
	float ipk;
};

float rataipk (Mahasiswa mahasiswa[], int jumlah){
	float total = 0;
	
	for (int i=0; i < jumlah; ++i){
		total += mahasiswa[i].ipk;
	}
	
	return total / jumlah;
}

int main(){
	const int jumlahMahasiswa = 3; 	//ukuran array mahasiswa
	Mahasiswa daftarMahasiswa[jumlahMahasiswa];
	

	
	for (int i = 0; i < jumlahMahasiswa; ++i){
		cout << " Masukkan Nama Mahasiswa "<<i + 1 << ": " ;
		cin >> daftarMahasiswa[i].nama;
		cout << " Masukkan Umur Mahasiswa "<<i + 1 << ": ";
		cin >> daftarMahasiswa[i].umur;
		cout << " Masukkan IPK Mahasiswa "<<i + 1 << ": ";
		cin >> daftarMahasiswa[i].ipk;
	}
	
	//mahasiswi daftar_mahasiswi[jumlahmahasiswi];
	
	cout << "\n Data Mahasiswa : \n";
	for (int i =0; i < jumlahMahasiswa; ++i){
		cout << " Mahasiswa "<< i + 1 <<": \n";
		cout << " Nama : " << daftarMahasiswa[i].nama << "\n";
		cout << " Umur : " << daftarMahasiswa[i].umur << "\n";
		cout << " IPK : " << daftarMahasiswa[i].ipk << "\n";
	}
	
	float rata = rataipk (daftarMahasiswa, jumlahMahasiswa);
	cout << "\n Rata-Rata IPK = "<< rata << "\n";
	
	return 0;
}
