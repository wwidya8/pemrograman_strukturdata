//#include <iostream>
//#include <stdlib.h>
//#include <conio.h>
//#define MAX 10
//using namespace std;
//
//int top=-1, stack[MAX];
//
//void push(){
//	if(top == MAX-1){
//		cout<<">> Stack sudah Penuh !!"<<endl;
//	}
//	else{
//		top++;
//		cout<<">> Masukan Data : ";
//		cin>>stack[top];
//		cout<<"\nPada index ke '"<<top<<"' \n";
//		cout<<"Data ["<<stack[top]<<"] telah Ditambah !"<<endl;
//	}
//}
//
//void pop(){
//	if(top == -1){
//		cout<<">> Stack kosong !"<<endl;
//	}
//	else{
//		cout<<"\nData ["<<stack[top]<<"] pada index ke-"<<top<<" dalam stack diambil !"<<endl;
//		stack[top--];
//	}
//}
//
//int clear(){
//	return top = -1;
//}
//
//void print(){
//	if(top == -1){
//		cout<<"		stack : ";
//		cout<<"\n==========================================="<<endl;
//		cout<<"		Empty! \n==========================================="<<endl;
//	}
//	else{
//		cout<<"		stack : ";
//		cout<<"\n==========================================="<<endl;
//		
//		for(int i = top; i>=0; i--){
//			cout<<"\t    xxxxx["<<stack[i]<<"]xxxxx"<<endl;
//		}
//		cout<<"===========================================";
//	}
//}
//
//int main(){
//	int choose;
//	do{
//		print();
//		cout	<<"\n1. Push"
//				<<"\n2. Pop"
//				<<"\n3. Clear"
//				<<"\n4. Exit"
//				<<"\nPergerakan ( TOP ) : "<<top
//				<<"\n\nChoose = ";cin>>choose;
//		switch (choose){
//			case 1 : 
//				push();getch();
//				break;
//			case 2 : 
//				pop();getch();
//				break;
//			case 3 : 
//				clear();
//				cout<<"\nClear Succes"<<endl;
//				getch();
//				break;
//			case 4 : 
//				cout<<"Terima Kasih telah menggunakan program ini"<<endl;
//				getch();
//				break;
//			default : 
//				cout<<"pilihan tidak ada\nMasukan pilihan sesuai daftar"<<endl;
//				getch();
//				break;
//		}
//		system("cls");
//	}
//	while(choose != 4);
//	
//}

//https://www-tutorialspoint-com.translate.goog/cplusplus-program-to-implement-stack-using-array?_x_tr_sl=en&_x_tr_tl=id&_x_tr_hl=id&_x_tr_pto=tc
//Tumpukan adalah struktur data abstrak yang berisi kumpulan elemen. Stack mengimplementasikan mekanisme LIFO 
//yaitu elemen yang didorong di bagian akhir akan dikeluarkan terlebih dahulu. Beberapa operasi prinsip dalam tumpukan adalah 
//Peek - Ini mengembalikan nilai data teratas dari tumpukan
#include <iostream>
using namespace std;
    //Push - Ini menambahkan nilai data ke bagian atas tumpukan.
	//Pop - Ini menghapus nilai data di atas tumpukan
int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"---Stack Underflow---"<<endl<<endl;
   else {
      cout<<"The popped element is "<< "[ "<<stack[top]<<" ]" <<endl<<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl<<endl;
   
   cout<<"<===============================>"<<endl<<endl;
   do {
      cout<<"Enter choice: ";
      cin>>ch;
      cout<<endl;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed: ";
            cin>>val;
            cout<<endl;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}

// STRUCT
//https://www.teachmesoft.com/2019/03/struct-of-array-c-disertai-contoh-tugas.html
//Algoritma :
//1. Mulai
//2. Deklarasikan struktur orang: nama, umur
//2. Untuk i=0 sampa dengan i=4 kerjakan 4 dan 5
//4. Masukan orang.nama
//5. Masukan orang.umur
//6. Untuk i=0 sampai dengan i=4 kerjakan 7 dan 8
//7. Tampilakan orang.nama
//8. Masuk Tampilkan Orang.umur
//9. Selesai

//typedef struct orang
//{
//    char nama[30];
//    short umur;
//}
//org;
//main(){
//    org saya[5];
//    int i,x;
//    for(i=0; i<=4; i++)
//    {
//        cout<<"Nama : ";cin>>saya[i].nama;
//        cout<<"Umur : ";cin>>saya[i].umur;
//        cout<<endl;
//    }
//   for(x=0; x<=4; x++)
//   {
//       cout<<"Data ke ["<<x<<"] "<<"bernama "<<saya[x].nama<<" dan berumur "<<saya[x].umur<<" tahun";
//       cout<<endl;
//   }
//}
