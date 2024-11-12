#include <iostream>
using namespace std;
int main() {
    int i, j, k, h;
    for (i = 1; i <= 4; i++) {
        for (k = 4; k >= i; k--) {
            cout << " ";
        }
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        for(j=i-1;j>0;j--){
            cout<<j;
        }
        cout << endl;
    }
    return 0;
}
