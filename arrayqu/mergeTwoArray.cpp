#include<iostream>
#include<vector>
using namespace std;
vector<int>mergeArr(vector<int> arr1, vector<int> arr2, vector<int>arr3,int n, int m){
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
            k++;
        }
        else{
            arr3.push_back(arr2[j]);
            k++;
            j++;
        }
     
    }
        
        while (i<n)
        {
            arr3.push_back(arr1[i]);
            k++;
            i++;
        }
        
        while (j<m)
        {
            arr3.push_back(arr2[j]);
            k++;
            j++;
        }
    return arr3;

}
void printArr(vector<int>a){
    for (int i = 0; i <a.size(); i++)
    {
        cout<<a[i] << " ";
    }
    cout<<endl;
    
}
int main()
{
    vector<int> arr1 ;
    // vector<int> arr1 = {1,3,5,7,9};
    arr1.push_back(9);
    arr1.push_back(3);
    arr1.push_back(5);
    arr1.push_back(7);
    arr1.push_back(1);

    vector<int> arr2 = {};
    // vector<int> arr2 = {2,4,6};

    arr2.push_back(6);
    arr2.push_back(4);
    arr2.push_back(2);
    vector<int> arr3;

    vector<int> result = mergeArr(arr1,arr2,arr3, 5,3);
    printArr(result);
    return 0;
}