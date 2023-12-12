# include <iostream>
using namespace std;

int main() {

  int a, i;
  
  cout<<"Masukan jumlah angka : ";
  cin>>a;
    
  cout << "\n## Program Perulangan Meningkat ##" << endl;
  cout << "=====================================" << endl;
  
  for (i=1; i<=a; i++) {
    cout << i <<endl;
  }
  cout << endl;
  cout << "## Program Perulangan Menurun ##" << endl;
  cout << "=====================================" << endl;
  
  for (i=a; i>=1; i--) {
    cout <<i<<endl;
  }
  return 0;
}
