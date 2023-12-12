#include <iostream>
using namespace std;
 
int main()
{
  cout << "## Program Perulangan Persegi Angka ##" << endl;
  cout << "================================" << endl;
  cout << endl;
 
  int angka_persegi,i,j;
 
  cout << "Input angka : ";
  cin >> angka_persegi;
 
  cout << endl;
 
  for(i=1; i<=angka_persegi; i++) {
    for(j=1; j<=angka_persegi; j++) {
      cout << i << " ";    
	  }
    cout << endl;
  }
 
  return 0;
}
