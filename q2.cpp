#include <iostream>
using namespace std;

int factorial_ncr(int n,int r){
  int r_fact=1,nr_fact=1;
  double ncr,n_fact=1.0;
  for(int i=1;i<=n;i++){
    n_fact*= i;
  }
  for(int i=1;i<=r;i++){
    r_fact*= i;}
  for(int i=1;i<=n-r;i++){
    nr_fact*= i;}
  ncr= n_fact/ (r_fact*nr_fact);
  return ncr ;
  }
int main() {
  cout<<"ncr value of these coffients are " <<factorial_ncr(8,2)<<" and "<<factorial_ncr(6,2)<<endl;
  }
