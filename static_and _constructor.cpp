#include <iostream>
#include <string>
using namespace std;

class complex {
private:
    int a, b;
    static int i;
public:
   static void change(int  j){
       i=j;
   }
complex(){
    cout<<"hello user!!"<<endl;
    cout<<"i= "<<i<<endl ;
}
};
int complex:: i= -1;
int main() {
    complex c1;
    c1.change(5);
    return 0;
}
