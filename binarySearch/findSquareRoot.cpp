#include<iostream>
using namespace std;
int findSqRoot(int n){
    int s = 0;
    int e = n;
    int mid = (s+e)/2;
    int ans = 0;
    while (s <= e)
    {
        if((mid * mid) > n){
            e = mid - 1;
        }
        else if((mid * mid ) < n){
            ans = mid;
            s = mid + 1;
        }
        else if((mid * mid ) == n){
            return mid;
        }
        // mid = 
        mid = (s+e)/2;
    }
    return ans;
    
}
int main()
{
    int temp = findSqRoot(10);
    int n = 10;
    int precission = 3;
    double factor = 0.1;
    double ans = temp;
        for (int i = 0; i < precission; i++) { // this loop iterate until precission in greater
            factor = factor/10; // for change the value of factor 0.1 to 0.01 and 0.001 and so on
            for (double j = ans; j*j < n ; j = j+factor) { // this loop compare and check sq of j is less then finding square no and increase the value of j by factor 
                
                ans = j; // store in the ans and the ans is again compare in j loop
            }
        }

    cout<< ans <<endl;
    return 0;
}