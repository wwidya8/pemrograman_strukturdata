#include <iostream>
using namespace std;
int main()

//NO.2 Penjumlahan Bilangan Ganjil
//{
//    int a, b = 0;
//  
//  for(a=1; a<=20; a++)
//  {
//    if ( a % 2 == 1)
//	{
//      cout<< a << "";
//      b = b + a;
//    }
//    else
//	{
//      if (a == 20)
//	  {
//      cout<< "";
//      }
//      else {
//        cout<< " + ";
//      }
//    }
//  }
//  cout << " = " << b;
//getchar;  
//
//}

{
    int a, b = 0;
  
  for(a=1; a<=20; a++)
  {
    if ( a % 2 == 0)
	{
      cout<< a << "";
      b = b + a;
    }
    else
	{
      if (a == 20)
	  {
      cout<< "";
      }
      else {
        cout<< " + ";
      }
    }
  }
  cout << " = " << b;
getchar;  

}
