#include <iostream>
using namespace std;
int main(){
    int a=5,b=10;
    double c=2.55 ;
    cout <<"sum is "<< (a + b) << endl;
    cout <<"diff is "<< (a - b) << endl;
    cout <<"mul is "<< (c * a) << endl;// it will double becouse double is bigger
    cout <<"dev is "<< (5 / 2 ) << endl;// round off 
    cout <<"dev is "<< (5 / (double)2 ) << endl;// it will double becouse double is bigger with any  variable 
    cout <<"mod is "<< (b % a) << endl;
    return 0;
} 