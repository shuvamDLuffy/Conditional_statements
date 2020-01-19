#include <stdio.h>

int isequal(int num1,int num2);

int main()
{
    int num1,num2;
    printf("Enter a first number= ");
    scanf("%d",&num1);

    printf("Enter second number= ");
    scanf("%d",&num2);

    if(isequal(num1,num2))    printf("The numbers are equal.  :)\n");
    else            printf("The numbers are not equal.  :(\n");  
}

int isequal( int num1, int num2)
{
    int result;
    if (num1!= num2) result = 0; 
    else    result = 1;
    return result;
}