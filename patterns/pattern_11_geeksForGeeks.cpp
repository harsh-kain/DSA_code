#include <iostream>
using namespace std;
 void printTriangle(int n) {
        // code here
        int k=0;
        for(int i = 0; i<=n; i++){
            for(int j = 0; j<i; j++){
                k++;
                cout<<k%2<<" ";
            }
            
            cout<<endl;
        }
    }
int main(){

    printTriangle(5);
    return 0;
}