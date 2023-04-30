#include<iostream>
using namespace std;
int divideNumber(int dividend, int divisor){
    int s =0;
    int e = abs(dividend);
    int mid = s + (e-s) / 2;
    int ans = -1;
    if(dividend == 0 && divisor == 0){
        return -1;
    }
    while (s <= e)
    {
        // perfect case (in this case we got the perfect divided number)
        if(abs(mid * divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(abs(mid * divisor) > abs(dividend)){
            e = mid - 1;
        }
        else{
            ans = mid; 
            s = mid + 1;
        }
        mid = s + ( e - s ) / 2 ;
        
    }
    if((dividend < 0 && divisor < 0 ) || ( dividend > 0 && divisor > 0)){
        return ans;
    }
    else{
        return -ans;
    }
    
}
int main()
{
    int dividend = 0;
    int divisor = 0;
    // cout<<divideNumber(dividend, divisor)<<endl;
    if(divideNumber(dividend , divisor) == -1){
        cout<<"Please enter some greater value"<<endl;
    }
    else{
        cout<<divideNumber(dividend , divisor)<<endl;
    }
    return 0;
}


// divisor * quotent + reminder = dividend 