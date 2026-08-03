#include<iostream>
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5};
// How array is stored in memory in memory
  /*
      //lets say that address of array start at memory location 401
memory location:  401  402  403  404  405 
                  ____ ____ ____ ____ ____
                 | 1  | 2  | 3  | 4  |  5 |
                  ____ ____ ____ ____ ____
    Indexes :      0    1    2   3    4
  */
  for(int i=0;i<sizeof(arr)/sizeof(int);i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Code executed";
  return 0;
}
