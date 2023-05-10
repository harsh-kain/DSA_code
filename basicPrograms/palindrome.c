#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char res[10] = "harah";
    int s = 0;
    int e = strlen(res)-1;
    while(s<e){
        // char temp = res[s];
        // res[s] = res[e];
        // res[e] = temp;
        if(res[s] != res[e]){
            printf("Not pallindrome\n");
            break;
        }
        printf("Pallindrome\n");
        s++;
        e--;
    }
    // printf("%s\n", res);
    return 0;
}
