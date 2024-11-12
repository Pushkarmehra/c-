#include <iostream>
using namespace std;
int bintodec(int binum){
  int dec=0,rem,power=1;
  while(binum>0){
    rem=binum%10;
    dec+=rem*power;
    binum/=10;
    power*=2;
  }
  return dec;
return 0;
}
int main(){
  int binum;
  cin>>binum;
  cout<<bintodec(binum)<<endl;
}