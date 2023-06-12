#include<iostream>
#include <string.h>
using namespace std;
string equaliseTwoStrings(int n, string &p, string &q) {

    int i;
    for (i = 0; i < n; i++)
    {
        if(p[i] != q[i]){
            cout<<p[i] <<" "<<q[i] <<endl;
            p[i] = q[i];
        }
    }
    cout<<"value of "<<i<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<p[i];
    }
    cout<<endl;
    if (p == q){
        cout<<"yes"<<endl;
    }
    return p;
}
int main()
{
    string p = "abcde";
    string q = "wyxzu";
    equaliseTwoStrings(5,p,q);
    return 0;
}
