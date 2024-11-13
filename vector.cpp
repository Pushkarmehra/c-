/*https://cplusplus.com/reference/vector/vector/*/ 
// use this link to learn about vector
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&v){
  for(int i =0 ;i<v.size();i++){
    /*this is a proprty of vector (v.size()) it will give you the size of that vector */
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int> vec1;/*this is like an array but here we didnot have to putt the size of array and the size is not very much
  issue here we didn't have to care about the size */
  int element;
  for(int i=0;i<4;i++){
    cout<<"enter the element to add in vector";
    cin>>element;
    vec1.push_back(element);
  }
  // vec1.pop_back()
  display(vec1);
  vector<int> :: iterator iter=vec1.begin();
  vec1.insert(iter,566);
  display(vec1);
return 0;
}

/* defination Vector
Vectors are sequence containers representing arrays that can change in size.

Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

Internally, vectors use a dynamically allocated array to store their elements. This array may need to be reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and moving all elements to it. This is a relatively expensive task in terms of processing time, and thus, vectors do not reallocate each time an element is added to the container.

Instead, vector containers may allocate some extra storage to accommodate for possible growth, and thus the container may have an actual capacity greater than the storage strictly needed to contain its elements (i.e., its size). Libraries can implement different strategies for growth to balance between memory usage and reallocations, but in any case, reallocations should only happen at logarithmically growing intervals of size so that the insertion of individual elements at the end of the vector can be provided with amortized constant time complexity (see push_back).

Therefore, compared to arrays, vectors consume more memory in exchange for the ability to manage storage and grow dynamically in an efficient way.

Compared to the other dynamic sequence containers (deques, lists and forward_lists), vectors are very efficient accessing its elements (just like arrays) and relatively efficient adding or removing elements from its end. For operations that involve inserting or removing elements at positions other than the end, they perform worse than the others, and have less consistent iterators and references than lists and forward_lists.
*/
