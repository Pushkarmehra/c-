
// finding is char is lower case or higher case 
// #include <iostream>
// using namespace std;
// int main (){
//     char ch;
//     cout<<"enter the char to find its lower case or upper case ";
//     cin>>ch;
//     if (ch>='a'&&ch<='z')
//     {
//        cout<<"its in lower case ";
//     }
//     else if (ch>='A'&& ch<='Z'){
//         cout<<"its in upper case";
//     }
//     else{
//         cout<<"enter the in char";
//     }
    
// }

// sum of all odd numbers


// #include <iostream>
// using namespace  std;
// int main (){
//     int i=0,n=50,z;
//     while(i<=n){
//         i++;
        
//         if (i%2!=0){
//             z+=i;
//         }
        
//     }
//     cout<<"sum = "<<z<<endl;
//     return 0;
// }


//sum of n umber s

// #include <iostream>
// using namespace  std;
// int main (){
//     int i=0,n=50,z;
//     while(i<=n){
//         i++;
//         z+=i;
//         if (i==5){
//             break;
//         }
        
//     }
//     cout<<"sum = "<<z<<endl;
//     return 0;
// }




// number is prime are not 
// #include <iostream>
// using namespace std;
// int main() {
//     int n,i;
//     cout<<"enter the number to identify the number is prime or not :";
//     cin>>n;
//   for(i=2;i<=n;i++){
//       if(n>=3&&n%i==0){
//           cout<<"number is not prime: "<<n;
//           break;
//       }
//       else if(n==1||n==2){
//           cout<<"number is prime: "<<n;
//           break;
//       }
//       else{
//           cout<<"number is prime: "<<n;
//           break;
//       }
//   }
//     return 0;
// }



// abc,def,ghi
// #include <iostream>
// using namespace std;
// int main(){
//     int i,j;
//     char k;
//         k='A';
//         for(i=1;i<=3;i++){
//             for(j=1;j<=3;j++){
//                 cout<<k;
//                 k++;
//                 }
//             cout<<endl;
//         }
//     return 0;
// }


//A,BB,CCC
#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    char k;
        k='A';
        n=4;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<k<<" ";

                }
                k++;
            cout<<endl;
        }
    return 0;
}