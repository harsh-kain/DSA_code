#include<stdio.h>
int arithmatic(int , int, char);
int main()
{   
    int a,b,op;
    printf("Enter the value of A---> ");
    scanf("%d", &a);
    printf("Enter the value of B---> ");
    scanf("%d", &b);
    printf("Enter the Operator you want to perform\n 1 - '+'\n 2 - '-'\n 3 - '*'\n 4 - '/'\n 5 - 'mod'\n ----> ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Your addition is %d\n", arithmatic(a,b,op));
        break;

    case 2:
        printf("Your substraction is %d\n", arithmatic(a,b,op));
        break;

    case 3:
        printf("Your multiplication is %d\n", arithmatic(a,b,op));
        break;

    case 4:
        printf("Your division is %d\n", arithmatic(a,b,op));
        break;
    case 5:
        printf("Your modulo is %d\n", arithmatic(a,b,op));
        break;    
    
    default:
        printf("Please Enter a valid operator\n");
        break;
    }
    return 0;
}

int arithmatic(int a, int b, char symbol){
    
    int add,sub,mul,divide,mod;
    if (symbol == '1')
    {
        return add = a+b;
    }
    else if(symbol == '-'){
        return sub = a-b;
    }
    else if(symbol == '*'){
        return mul = a*b;
    }
    else if(symbol == '/'){
        return divide = a/b;
    }
    else if(symbol == '%'){
        return mod = a%b;
    }
    
}
