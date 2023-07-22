#include<iostream>
#include<stack>
using namespace std;
int gVar = 0;


void insertAtBottom(stack<int> s, int &totalSize){
    if(s.size() == 0){
        s.push(gVar);
        return ;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, totalSize);
    s.push(temp);

}
int main()
{
    stack<int>s;
    s.push(5);
    s.push(15);
    s.push(27);
    s.push(32);
    s.push(11);

    gVar = s.top();
    s.pop();
    int totalSize = s.size();
    insertAtBottom(s, totalSize);

    
    return 0;
}