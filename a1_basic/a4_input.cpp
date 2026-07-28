#include<iostream>
using namespace std;
int main(){
  //In this i learn how to take input in cpp
  int age;
  cout<<"Memory location of age variable is: "<<age<<endl;
  //this will print a garbage value, basically memory location of where it is stored

  cout<<"Enter your age: ";
  cin >> age;  //To take input we write cin

  // '<<' and '>>' are overloaded operators, which we will study in OPPs;  
  cout<<"Your age is: "<<age<<endl;

  /*
  'cin' and 'cout' are not functions but global object
  */
  return 0;
}