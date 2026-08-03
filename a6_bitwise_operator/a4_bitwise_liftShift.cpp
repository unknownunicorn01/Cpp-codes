//Bitwise <<
#include<iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  /*
        101001 << 1 = 1010010
        11 << 2 = 1100

        //More on this
        if a is a number and you left shift it by n
        then:- 
                a << n = a*2^n;   //here ^ represent power
  */
  cout<<(a<<2);
  return 0;
}