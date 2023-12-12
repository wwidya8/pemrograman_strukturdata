#include <iostream>
using namespace std;
int main(){
bool benar;
int x,y;
cout << "nilai x: " ;
cin >> x;
cout << "nilai y: " ;
cin >> y;

benar = x < y;

if (benar == true) {
cout << "x lebih kecil dari y" ;
}else{
cout << "x lebih besar dari atau sama dengan y" ;
}

return 0;
}
