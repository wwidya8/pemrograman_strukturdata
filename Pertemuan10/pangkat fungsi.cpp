#include <iostream>
using namespace std;

// TUGAS 1 DENGAN FLOWCHART
#include <iostream>
using namespace std;

int pangkat (int x, int y) { 	//function yang menjalakan fungsi pangkat
 
	if (y==0){ 	//jika pangkat 0, maka nilai akan 1
		return 1;
	}
	else {
		return x* pangkat (x, y-1); 	//jika pangkat > dari 0, hasilnya akan X dikalikan X sebanyak (y-1), sampai y bernilai 0
	}
}

int main ()
{
	int x, y;
	
	cout<< "\n MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF "<<endl<<endl;
	
	cout<<" Masukkan Nilai X = ";
	cin>>x; 	//input data X
	cout<<" Masukkan Nilai Y = ";
	cin>>y; 	//imput data pangkat Y
	cout<<endl;
	
	cout<<" "<< x <<" Dipangkatakan "<< y <<" = "<< pangkat(x,y); 	//panggil function pangkat
	return 0;	

}


// PROGRAM POINTER
int ubah(int *x);

int main(){
	int number, a, *b;
	
	cout<<"\n Masukan Bilangan = ";
	cin>>number;
	
	a = number;	
	b = &number;

	ubah(&number);
	
	cout << "\n\n Result : " << a << " " <<*b<< " " <<a;

	return 0;
}

	
int ubah(int *x) {
	//jika bilangan genap, maka akan ditambah 1
   if (*x % 2 == 0) {
      *x = *x + 1;
   }
   
   else {
   	return *x;
   }
}
