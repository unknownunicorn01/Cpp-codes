//Bitwise >>
#include<iostream>
using namespace std;
int main(){
  /*
        101001 >> 1 = 010100
        11 << 2 = 01           //because it have nothing on right side, so number will not be stored

        //More on this
        if a is a number and you left shift it by n
        then:- 
                a << n = a/2^n;   //here ^ represent power
  */
  int a;
  cout<<"Enter a: ";
  cin >> a;
  cout<<(a>>1);
  return 0;
}