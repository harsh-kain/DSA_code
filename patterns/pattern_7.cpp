#include <iostream>
using namespace std;
int main(){

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int s = n; s > 1; s--)
        {
            cout<<"-";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<" * ";
        }
        for (int s2 = n; s2 > 1; s2--)
        {
            cout<<"-";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}