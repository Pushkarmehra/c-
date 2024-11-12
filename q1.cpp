#include <iostream>
using namespace std;

int factorial_n(int n){
  int i,sum=0;
  while(n!=0){
    i=n%10;
    n=n/10;
    sum+=i;
  }
  return sum ;
  }
int main() {
  cout<<"the sum of the digits numbers is " <<factorial_n(890)<<" and "<<factorial_n(111)<<endl;
  }
