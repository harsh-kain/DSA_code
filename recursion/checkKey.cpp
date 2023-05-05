#include<iostream>
using namespace std;

int findKey(string str, int i, int n, char key){
    if(i >= n){
        return -1;
    }

    if(str[i] == key){
        return i;
    }
    return findKey(str, i+1, n, key);
    
}
int main()
{
    string str = "we are anonymous";
    int n = str.length();
    int i = 0;
    cout<<findKey(str, i, n, 's')<<endl;
    return 0;
}