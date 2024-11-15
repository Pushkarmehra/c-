#include <iostream>
using namespace std;
// pass by reference
void pass(int arr[],int size){
    cout<<"in fun"<<endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] *=2;
    }
};
int main(){
    int arr[]={1,2,3};
    pass(arr,3);

    cout<<"in main"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
}