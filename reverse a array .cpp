#include <iostream>
using namespace std;
int main(){
 int arr[]={4,2,7,8,1,2,5}; 
 int size=sizeof(arr)/sizeof(int);
 for(int i=0,j=(size-1);i<j;i++,j--){
   //1
    // int temp;
    // temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
   //2
    swap(arr[i],arr[j]);
 }
  for(int i=0;i<size;i++){     
    cout<<arr[i]<<" ";
  }
}