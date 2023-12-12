#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int info;
	node *next;
}*top, *newptr, *save, *ptr;

node *create_new_node(int);

void push (node *);
void display (node *);

int main (){
	
	int inf;
	char ch= 'y';
	
	top = NULL;
	
	while (ch == 'y' || ch == 'Y'){
		
		cout << "Masukkan Node Baru.. ";
		cin >> inf;
		newptr = create_new_node(inf);
		
		if(newptr == NULL){
			cout << "\n Maaf!! tidak dapat menjalankan perintah!!\n";
			cout << "Tekan tombol apa saja untuk keluar.. \n";
			getchar();
			exit(1);
		}
		
		push(newptr);
		cout << "\n Antrian tumpukan saat ini : \n";
		display(top);
		cout << "\n Ingin menambah antrian? (y/n)..";
		cin >> ch;
	}
	getchar ();
}

node *create_new_node(int x){
	ptr = new node;
	ptr -> info = x;
	ptr -> next = NULL;
	return ptr;
}

void push (node *n){
	
	if (top == NULL){
		top = n;
	}else {
		save = top;
		top = n;
		n -> next = save;
	}
}

void display(node *n){
	while (n != NULL){
		cout << n->info << " -> ";
		n = n -> next;
	}
	cout << "!!\n";
}
