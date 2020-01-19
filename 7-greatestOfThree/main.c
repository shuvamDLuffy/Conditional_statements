#include <stdio.h>

int main()
{

   int num1,num2,num3,i,j;
    printf("Enter first number= ");
    scanf("%d",&num1);

    printf("Enter second number= ");
    scanf("%d",&num2);

    printf("Enter third number= ");
    scanf("%d",&num3);

    int numbers[3] ={num1,num2,num3};

   for(i=0;i<3;i++)
    {
            if(numbers[0]<numbers[i]) numbers[0] =numbers[i];
    }
    printf("%d\n",numbers[0]);

}

