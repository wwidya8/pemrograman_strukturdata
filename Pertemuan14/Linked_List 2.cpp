#include <iostream>
#define MAX 5
using namespace std;

struct TumpBuku {
	int top;
	int antrian[MAX];
}perpus;

void inisialisasi (){
	perpus.top = -1;
}

bool kondisiKosong (){
	return perpus.top == -1;
}

bool kondisiPenuh (){
	return perpus.top == MAX -1;
}

void inputData(){
	if (kondisiPenuh()){
		
		cout << "\n Antrian penuh" << endl;
	}else{
		perpus.top++;
		cout << "\n Masukkan Antrian"; cin >> perpus.antrian[perpus.top];
		cout << "Antrian" << perpus.antrian[perpus.top] << "Telah Masuk"
		
	}
}

void hapusData (){
	if (kondisiKosong()){
		cout << "\nAntrian Kosong \n" << endl;
	} else {
		cout << "\nAntrian " << perpus.antrian[perpus.top] << "Telah di Hapus" << endl;
		perpus.top--;
	}
}

void tampilData (){
	if (kondisiKosong()){
		cour << "Antrian Kosong";
	}else{
		cout << "\n Antrian : ";
		for (int i = perpus.top; i>=0; i--)
		cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
	}
}

int main(){
	
	int pil;
	inisialisasi();
	
	do{
		tampilData();
		cout << "\n 1. Masukkan Data\n"
			 << "2. Hapus data\n"
			 << "3. Keluar\n"
			 << "Masukkan Pilihan : ";
		cin >> pil;
	}
	
	switch (pilihan){
		case 1:
			inputData();
			break;
		
		case 2:
			inputData();
			break;
			
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
	} while (pilihan!=3);
}
