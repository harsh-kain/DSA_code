#include<stdio.h>
int main()
{   
    int num;
    printf("Enter the Number --->");
    scanf("%d", &num);

    if (num > 0 || num < 0)
    {
        if (num % 2 == 0){
            printf("No is even\n");
        }

        else if(num % 2 != 0){
            printf("No is odd\n");
        }
    }
    
    else{
        printf("Please enter a valid number\n");
    }
    
    return 0;
}
