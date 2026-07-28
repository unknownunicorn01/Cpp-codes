#include<iostream>
using namespace std;
int main(){

  // ----- PRIMITIVE DATATYPES -----
  
  //int datatype
  /*
  int datatype take 4byte space, and each byte contains 4 bits
  */
  int age = 20;
  cout<<"age stored in integer datatype: "<<age<<endl;
  //char datatype
  /*
  char a shortform of chatacter, it take only 1 byte, it is store in memory in which every character
  is represented by a number, which is knows as its ASCII (American Stander Code of Information
  Interchange) value.
  */
  char gender = 'M'; //char can store only one character
  cout<<"gender in char datatype: "<<gender<<endl;
  //float datatype
  /*
  float is shortfor for floating number and take 4 byte in memory
  is it use for decimal number
  every float number have to end with 'f' otherwise compiler believe that you are writing double datatype
  */
  float PI  = 3.14f; //pi is a constand so we write it in capatel latter, just a good practice not a rule
  cout<<"value of pi in floating number: "<<PI<<endl;
  //bool datatype
  /*
  takes 1 byte in memory, full form is boolean 
  it is use to represent true and false value
  is memory it s stored as '0' for false and '1' for true values
  */
  bool pass = true; //mean store 1 in memory
  cout<<"boolean value for true: "<<pass<<endl;

  //double
  /*
  take 8 byte in memory
  use to stoer big number which float can store because float and int are limitted to take 
  number to some decimer place of limitted big number
  */
  double price = 999.99;
  cout<<"Double value of price: "<<price;
  return 0; 

}