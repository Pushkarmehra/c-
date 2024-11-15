#include <iostream>
using namespace std;
int linearSearch(int arr[],int tar){
  int i;
  for(i=0;i<7;i++){
    if(arr[i]==tar){
      return i;}}
  return -1;
}
int main()
{/* method 1 simple 
int arr[]={4,2,7,8,1,2,5};
  int tar=8;
for(int i=0;i<7;i++){
  if(arr[i]==tar){
    cout<<i;
    break;
  }
  else if(i==6){
    cout<<-1;
  }
  else{
    continue;
  }
  */

  /*********method 2 using linearSearch *********/
  int arr[]={4,2,7,8,1,2,5};
  int tar=8;
  cout<<linearSearch(arr,tar)<<endl;
}