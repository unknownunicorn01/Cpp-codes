//XOR says that if bit is same then answer will be 0 otherwise 1
#include<iostream>
using namespace std;
int main(){
  int a = 4,b = 8;
  /*
      (8)2        = 1000
      (4)2        = 0100
      (4)2 ^ (8)2 = 1100 = (12)10
  */
  cout<<(a^b);
  return 0;
}