#include <iostream>
#include <string>
using namespace std;

class complex {
private:
    int a, b;
    static int i;
public:
   void setData(int x,int y){a=x;b=y;}
   void showData(){
       cout<<"\na="<<a<<"\nb="<<b;
   }
   friend void fun(complex c);
};
   void fun(complex c){
       cout<<"sum is "<<c.a+c.b;
   }
int complex:: i= -1;
int main() {
    complex c1;
    c1.setData(2,3);
    fun(c1);
    return 0;
}
