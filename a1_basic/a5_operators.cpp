#include<iostream>
using namespace std;
int main(){
  //    ---- ARTHMATIC OPERATOR ----
  //1. '+' Add
  int a = 4, b = 5;
  int sum = a+b;
  cout<<"sum of a and b is: "<<sum<<endl;
  
  //2. '-' Subtract
  int subtract = b-a;
  cout<<"Deffrence between a and b : "<<subtract<<endl;

  //3. '*' Multiply
  int multiply = a*b;
  cout<<"Prosuct of a and b : "<<multiply<<endl;

  //4. '/' Division
  float div = (float)a/b;
  cout<<"a devide by b: "<<div<<endl;
  
  //5. '%' Modelus , use to print reminder
  int mod = b%a;
  cout<<"Modulas: "<<mod<<endl;


  //    ---- RELATIONAL OPERATORS ----
  /*
  By default relational operator have return type boolean, which mean it will return true or false
  it is use to compair value
  like > , >= , < , <= , ==(mean same value and datatype) , != (not equals to)
  */
 
 cout<< (3<=4) <<endl;  //3 is less then 4 so it will print 1 mean true
 cout<< (3==5) <<endl; //3 is not equal to 5 so it will print 0 mean false
 cout<< (4 == 4) <<endl; //4 equal to 4 it will print 1 mean true
 cout<< (3 != 4)<< endl; //3 is not equal to 4 so it will print 1 mean true

  //   ---- LOGICAL OPERATOR ----
  //1.  '!' (logical not)
  cout<< !(3 == 2) <<endl; 
  /*
   3 is not equal to 2 so it will return false, but because we used '!' not operator, so it will 
   return true
  */
 
  //2.  '&&' AND operator
  cout<<( (2 == 2) && (4 == 3) )<<endl;  //when both statement are ture then only it will return true
  /*
    TRUTH TABLE OF AND
    input 1  |  input 2  | result
       1     |    1      |   1
       1     |    0      |   0
       0     |    1      |   0
       0     |    0      |   0  
  */

  cout<<((3==3) || (4 == 5))<<endl; //Even if only one statement is true it will return true
  /*
    TRUTH TABLE OF OR
    input 1  |  input 2  | result
       1     |    1      |   1
       1     |    0      |   1
       0     |    1      |   1
       0     |    0      |   0  
  */


  //4. Urary operator
  //work on one variable
  //a. Incriment uraniri operator
  int c = 2;
  //pri incriment
  cout<<(++c)<<endl; //add one in c before printing so 3 will pe print
  //post incriment
  cout<<(c++) <<endl;  //because not value of c is 3, it will print 3 and then incriment
  
  cout<<"Value of c is: "<<c<<endl;

  
  int d=4;
  //pre decriment
  cout<<(--d)<<endl; //will decrease value of d by one then print value of d;
  //post decriment
  cout<<(d--)<<endl;  //will print value of d then decrease

  cout<<"Value of d:"<<d<<endl;


  return 0;
}