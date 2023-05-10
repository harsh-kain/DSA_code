#include<stdio.h>
int febonacci(int);
int main()
{
    febonacci(10);
    return 0;
}
int febonacci(int n){
    int a = 1, b=0,sum=0;
    for (int i = 1; i < n; i++)
    {   
        printf("%d ", sum = a+b);
        a = b;
        b = sum;
    }
    
    return n;
}