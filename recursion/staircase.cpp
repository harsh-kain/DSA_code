#include<iostream>
using namespace std;
int staircase(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return (staircase(n-1)+staircase(n-2));
}
int main()
{
    int n = 6;
    cout<<staircase(n)<<endl;
    return 0;
}
