//while 
// #include <iostream>
// using namespace  std;
// int main (){
//     int i=1,n=10;
//     while (i<=n)
//     {
//         cout<<i<<" ";
//         i++;
//     }
    
// }
//for loop
// #include <iostream>
// using namespace  std;
// int main (){
//     int i=1,n=5,z;
//     for(int i=1;i<=n;i++){
//         z+=i;
//     }
//     cout<<"sum = "<<z<<endl;
//     return 0;
// }



// Do while loop 
#include <iostream>
using namespace  std;
int main (){
    int i=0,n=5,z;
    do{
        i++;
        if (i%2!=0){
            z+=i;}
    }
    while(i<=n);
    cout<<"sum = "<<z<<endl;
    return 0;
}