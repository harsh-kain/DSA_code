#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 == 0) && (year % 100 != 0))
    {
        printf("Year is leap year");
    }
    else{
        printf("Not a leap year\n");
    }
    
    return 0;
}
