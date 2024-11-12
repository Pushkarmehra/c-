// #include <iostream>
// using namespace std;
// int bin(int a){
//   while(a>0){
//     cout<<a%2;
//     a=a/2;
//   }
//   return 0;}
// int main(){
//   int a;
//   cin>>a;
//   bin(a);
//   return  0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int bin(int a){
  int i=0,k;
  k=0;
  while(a>0){
    i+=a%2*pow(10,k);
    k++;
    a=a/2;
    
  }
  cout<<i;
  return 0;}
int main(){
  int a;
  cin>>a;
  bin(a);
  return  0;
}
