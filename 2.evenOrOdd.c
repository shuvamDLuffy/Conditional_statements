#include <stdio.h>

int main()
{
    int num;
   printf("Enter a positive number= ");
   scanf("%d",&num);

  
        if(num>0){
             if(num % 2==0) printf("The given number is even.");

            else  printf("The given number is odd.");

        }

        else printf("Enter a valid number.");
 
    printf("\n");
}
