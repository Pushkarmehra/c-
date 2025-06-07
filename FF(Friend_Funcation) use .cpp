#include <iostream>
#include <string>
using namespace std;
class B;
class A{
private:
    int a;
public:
   void setData(int x){a=x;}
   friend void fun(A,B);
};
class B{
private:
    int b;
public:
   void setData(int x){b=x;}
   friend void fun(A,B);
};
   void fun(A o1,B o2){
       cout<<"sum is "<<o1.a+o2.b<<endl;
   };
int main() {
    A o1;B o2;
    o1.setData(2);
    o2.setData(3);
    fun(o1,o2);
    return 0;
}
