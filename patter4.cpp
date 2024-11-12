//hollow shape 
#include <iostream>
using namespace std;
int main(){
      int i,j,k;
  for(i=0;i<4;i++){
    for(j=0;j<=4-1-i;j++){
      cout<<" ";
    }
    cout<<"*";
    if(i!=0){
      
      for(k=0;k<2*i-1;k++){
        cout<<" ";
      }
      cout<<"*";
    }
    else{
    }
    cout<<endl;
  }
  for(i=0;i<3;i++){
    for(j=0;j<=i+1;j++){
      cout<<" ";
    }
    cout<<"*";
    if(i!=2){
      for(k=0;k<3-2*i;k++){
         cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
}