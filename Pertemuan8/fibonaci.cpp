#include <iostream>
using namespace std;
int main()
{
	//f(n)= f(n-1) + (n-2)
	
	int n, a=1, b=0, c;
	cout<<"Program Deret Fibonaci \n";
	cout<<"Masukkan Nilai ke-N : ";
	cin>>n;
	
	for (int i=1; i<=n; i++){
		cout<<c<<endl;
		c=a+b;
		b=a;
		a=c;
	}

	return 0;
}
