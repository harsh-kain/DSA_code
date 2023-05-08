#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArr(vector<int> arr , int m){
    int start = m+1, end = arr.size()-1;
    int temp;
    while (start<=end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    return arr;

}
void printArr(vector<int> n){
    for(int i = 0; i<n.size(); i++){
        cout << n[i] <<" ";

    }
    cout <<endl;
}

int main()
{

    vector <int> arr;
    arr.push_back(11);
    arr.push_back(1);
    arr.push_back(12);
    arr.push_back(20);
    arr.push_back(5);

    vector<int> n   = reverseArr(arr, 1);
     printArr(n);
    return 0;
}