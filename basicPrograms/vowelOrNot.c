#include<stdio.h>
int main()
{   
    char alpha;
    printf("Enter the character\n");
    scanf("%c", &alpha);

    if ((alpha == 'a') || (alpha == 'e') || (alpha == 'i') || (alpha == 'o') || (alpha == 'u') || 
    (alpha == 'A') || (alpha == 'E') || (alpha == 'I') || (alpha == 'O') || (alpha == 'U'))
    {
        printf("Given alphabet is Vowel\n");
    }
    else{
        printf("Not a vowel\n");
    }
    
    return 0;
}
