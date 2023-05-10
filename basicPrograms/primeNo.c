#include<stdio.h>
#include<math.h>
void primeNoFunc(int);
int main()
{
    
    primeNoFunc(13);
    return 0;
}
void primeNoFunc(int n){
    int count = 0;
    for (int i = 2; i < n/2 ; i++)
    {
        if(n % i == 0){
            count++;
            printf("Not prime \n");
            break;
        }
    }
    if(count == 0)
        printf("Prime no\n");
}
