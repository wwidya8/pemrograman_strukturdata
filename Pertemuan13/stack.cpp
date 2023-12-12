#include <iostream>
#define MAX 5
using namespace std;

struct Tumpuk{
	int top;
	int antrian[MAX];
}perpus;

void inisial(){
	perpus.top=-1;
}
bool kondisiKos(){
	return perpus.top == -1;
}
bool kondisiPen(){
	return perpus.top == MAX-1;
}
void inputdat(){
	if(kondisiPen()){
		cout<<"\nAntrian Penuh"<< endl;
	}
	else{
		perpus.top++;
		cout<<"Masukan Antrian = ";
		cin>>perpus.antrian[perpus.top];
		cout<<"Antrian "<<perpus.antrian[perpus.top]<<" Telah Masuk Ke tumpukan"<<endl;
	}
}
void hapusdat(){
	if(kondisiKos()){
		cout<<"\nAntrian kosong\n"<<endl;
	}
	else{
		cout<<"\nAntrian "<<perpus.antrian[perpus.top]<<" Telah Dihapus"<<endl;
		perpus.top--;
	}
}
void tampil(){
	if(kondisiKos()){
		cout<<"Antrian Kosong";
	}
	else{
		cout<<"Antrian : ";
		for(int i = perpus.top; i >=0; i--){
			cout<<perpus.antrian[i];
		}
	}
}
int main(){
	int pilihan;
	inisial();
	do{
		tampil();
		cout<<"\n1. Masukan"
			<<"\n2. Hapus"
			<<"\n3. Keluar\n"
			<<"Masukan Pilihan: ";
			cin>>pilihan;
		switch(pilihan){
			case 1:
				inputdat();
				break;
			case 2: 
				hapusdat();
				break;
			default : 
				cout<<"Pilihan tidak tersedia"<<endl;
				break;
		}
	}
	while(pilihan != 3);
}



#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define MAX 10
using namespace std;

int top=-1, stack[MAX];

void push(){
	if(top == MAX-1){
		cout<<">> Stack sudah Penuh !!"<<endl;
	}
	else{
		top++;
		cout<<">> Masukan Data : ";
		cin>>stack[top];
		cout<<"\nPada index ke '"<<top<<"' \n";
		cout<<"Data ["<<stack[top]<<"] telah Ditambah !"<<endl;
	}
}

void pop(){
	if(top == -1){
		cout<<">> Stack kosong !"<<endl;
	}
	else{
		cout<<"\nData ["<<stack[top]<<"] pada index ke-"<<top<<" dalam stack diambil !"<<endl;
		stack[top--];
	}
}

int clear(){
	return top = -1;
}

void print(){
	if(top == -1){
		cout<<"		stack : ";
		cout<<"\n==========================================="<<endl;
		cout<<"		Empty! \n==========================================="<<endl;
	}
	else{
		cout<<"		stack : ";
		cout<<"\n==========================================="<<endl;
		
		for(int i = top; i>=0; i--){
			cout<<"\t    xxxxx["<<stack[i]<<"]xxxxx"<<endl;
		}
		cout<<"===========================================";
	}
}

int main(){
	int choose;
	do{
		print();
		cout	<<"\n1. Push"
				<<"\n2. Pop"
				<<"\n3. Clear"
				<<"\n4. Exit"
				<<"\nPergerakan ( TOP ) : "<<top
				<<"\n\nChoose = ";cin>>choose;
		switch (choose){
			case 1 : 
				push();getch();
				break;
			case 2 : 
				pop();getch();
				break;
			case 3 : 
				clear();
				cout<<"\nClear Succes"<<endl;
				getch();
				break;
			case 4 : 
				cout<<"Terima Kasih telah menggunakan program ini"<<endl;
				getch();
				break;
			default : 
				cout<<"pilihan tidak ada\nMasukan pilihan sesuai daftar"<<endl;
				getch();
				break;
		}
		system("cls");
		
	}
	while(choose != 4);
	
}

