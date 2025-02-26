// Online C++ compiler to run C++ program online
#include <iostream>
#define SIZE 10
using namespace std;
int main() {
    class emp{
        public:
        char name[10];
        int rollNo;
        void print(){
            cout<<"Hi is first time i create a  class ";
        }
    };
    // ClassName ObjectName;
    emp obj;
    fgets(obj.name,sizeof(obj.name),stdin);
    for(int i=0;i<10;i++)
    cout<<obj.name[i];
    obj.print();
    return 0;
}
