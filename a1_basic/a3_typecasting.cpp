#include<iostream>
using namespace std;
int main(){
  //we will learn type casting in cpp
  //type casting is when we change one type of datatype into another type

  //there are two type of type casting
  //1. Type conversion [implecit]
  /*
  This type of type casting is done by out compiler, like when we store a long type of datatype in a 
  small one it can convert it into big datatype like, we swrite float value in double which take more
  memory then float, and we can store char datatype in int because char take 1 byte and int take 4 byte
  */
  char grade = 'A';
  int value = grade; //left side store value of right
  cout<<value<<endl;  //will print ASCII value of grade stored in valye
  

  //2. Type casting
  /*
  We can force compiler to convert big datatype into small datatype
  It is done by us manually
  */
  double price = 123.89;
  int newPrice = price; //store only 123 not decimal part
  cout<<newPrice<<endl;

  return 0;
}