  #include <iostream>
  #include <vector>
#include <climits>
  using namespace std;
  int main(){
      int n=7;
      int arr[7]={3,-4,5,4,-1,7,-8};
    int maxSum= INT_MIN;
    for(int st=0;st<n;st++){
      int currSum=0;
      for(int end=st;end<n;end++){
        currSum+=arr[end];
        maxSum=max(maxSum,currSum);
      }
    }
    cout<<"maxSum is "<<maxSum<<endl;
      // for(int st=0;st<7;st++){
      //     for(int end=st;end<n;end++){
      //        for(int i=st;i<=end;i++){
      //         cout<< arr[i];
      //        } 
      //        cout<<" ";
      //     }
      //     cout<<endl;
      // }
      return 0;
  }