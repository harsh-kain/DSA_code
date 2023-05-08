#include<iostream>
#include<vector>
using namespace std;
vector<int> findNoZero(vector<int> arr){
    int i = 0;
    int temp;
    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        } 
    }
    return arr;
    
}
void printArr(vector<int> n){

    for(int i = 0; i<n.size(); i++){
        cout<<n[i]<< " "; 
    }
    cout<<endl;
}


int main()
{
    vector<int> n = {2,5,0,8,0,0,0};
    vector<int> ans = findNoZero(n);
    printArr(ans);
    return 0;
}