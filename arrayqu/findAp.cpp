#include<iostream>
using namespace std;
void findAP(int n){
    int k = 1;
    for (int i = 1; i <=n || k <= n; i++)
    {
        if(((3*i)+2) % 4 != 0){
            cout<<((3*i)+2)<<" ";
           k++; 
        }
       
    }
     
}
int main()
{

    findAP(10);
    return 0;
}