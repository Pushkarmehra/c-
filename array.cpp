#include <iostream>
using namespace std; 
int main(){
  int marks[5]={99,100,36,77,10};//creating array  and giving value to them
 double price[]={89,79,9};// it will give its size atomaticaly 3 
  cout<<price[2]<<endl;
  cout<<marks[0]<<endl;//we can assces the value of array by using (varablename[index]) 
  // cout<<mark[1]<<endl;
  // cout<<mark[2]<<endl;
  // cout<<mark[3]<<endl;
  // cout<<mark[4]<<endl;


  int size;
  size=sizeof(marks)/sizeof(int); //easy way to find the size of array
  cout<<size<<endl;

    // using looops
  for(int i=0;i<size;i++){
  cout<<marks[i]<<endl;
  }
  return 0;
}
