#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
main ()
//{
//	
// int a, b;
// char lagi;
// atas :
// 	
//// clrscr();
// cout<<"\nMasukan Bilangan = ";
// cin>> a;
// 
// b = a % 2;
// 
// printf("Nilai %d %% 2 adalah = %d",a,b);
// printf("\n\nIngin Hitung Lagi [Y/T] : ");
// 
// lagi = getche();
// 
// if (lagi == 'Y' || lagi == 'y')
// goto  atas;
// 
// getch();
//}

//{
//	 int a, b=0, c=0;
// 
// for (a=1; a<=20; a++){
// 	
//  if ( a % 2 == 1)
//  {
//   cout<< a;
//   b = b + a;
//  }
//  
//  else{
//   if (a == 19)
//   {
//   cout<< "";
//   }
//   else {
//    cout<< " + ";
//   }
//  
//  }
// }
// cout << " = " << a;
//}


//{
// int c, d=0, f=0;
// 
// for(c=2; c<=20; c++){
//  if (c % 2 == 0){
//   cout<< c;
//   d = d + c;
//  }
//  else{
//   if ( c == 20){
//   cout<< "";
//   }
//   else {
//    cout<< " + ";
//   }
//  
//  }
// }
//  cout << " = " << c;
//}


{
 int a = 3, b = 2, c = 1, bil;

// clrsrc();
 printf("BIL-A | BIL-B | BIL-C\n");
 printf("----------------------");
 
 for(bil = 1; bil <= 10; ++bil){
  a+=b, b+=c, c+=2;
  
  printf("\n%d\t|%d\t|%d", a,b,c);
  if(c == 13){
	break;
  }
 }
 getche();
}
